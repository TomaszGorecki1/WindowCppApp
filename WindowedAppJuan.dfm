object Window1: TWindow1
  Left = 969
  Top = 360
  Width = 419
  Height = 642
  Cursor = crHandPoint
  AlphaBlend = True
  Anchors = []
  BorderIcons = [biSystemMenu, biMinimize, biMaximize, biHelp]
  BorderWidth = 1
  Caption = 'My app'
  Color = clNone
  Constraints.MaxHeight = 2560
  Constraints.MaxWidth = 1440
  Constraints.MinHeight = 599
  Constraints.MinWidth = 399
  Font.Charset = ANSI_CHARSET
  Font.Color = clWhite
  Font.Height = -37
  Font.Name = 'Engravers MT'
  Font.Style = [fsBold, fsUnderline]
  Menu = MenuLeft
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 43
  object MenuLeft: TMainMenu
    Left = 32
    Top = 16
    object Pr1: TMenuItem
      Caption = 'Przejdz na m'#243'j GitHub'
      OnClick = Pr1Click
    end
    object Edycja1: TMenuItem
    end
  end
end
