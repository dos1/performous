#ifndef PERFORMOUS_DIALOG_HH
#define PERFORMOUS_DIALOG_HH

#include "opengl_text.hh"
#include "screen.hh"
#include "surface.hh"

/// class for printing dialogues
class Dialog {
  public:
	/// constructor
	Dialog(std::string const& text):
	  m_text(text),
	  m_dialog(getThemePath("warning.svg")),
	  m_svgText(getThemePath("dialog_txt.svg"))
	{
		m_dialog.dimensions.fixedWidth(0.8);
	}
	/// draws dialogue
	void draw() {
		m_dialog.draw();
		m_svgText.draw(m_text);
	}

  private:
	std::string m_text;
	Surface m_dialog;
	SvgTxtTheme m_svgText;
};

#endif
