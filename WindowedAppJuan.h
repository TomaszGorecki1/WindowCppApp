//---------------------------------------------------------------------------

#ifndef WindowedAppJuanH
#define WindowedAppJuanH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TWindow1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MenuLeft;
        TMenuItem *Pr1;
        TMenuItem *Edycja1;
        void __fastcall Pr1Click(TObject *Sender);
        void __fastcall Edycja1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TWindow1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TWindow1 *Window1;
//---------------------------------------------------------------------------
#endif
