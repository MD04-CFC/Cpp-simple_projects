object Form1: TForm1
  Left = 303
  Top = 203
  Width = 755
  Height = 554
  Caption = 'Notatnik'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object tresc: TMemo
    Left = 0
    Top = 0
    Width = 739
    Height = 495
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = trescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 704
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = '&Nowy'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otwrz1: TMenuItem
        Caption = '&Otw'#243'rz'
        OnClick = Otwrz1Click
      end
      object Zapisz1: TMenuItem
        Caption = '&Zapisz    Ctrl+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = '&Zapisz jako'
        OnClick = Zapiszjako1Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = '&Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object Wytnij1: TMenuItem
        Caption = '&Wytnij    Ctrl+X'
        OnClick = Wytnij1Click
      end
      object KopiujCtrlC1: TMenuItem
        Caption = '&Kopiuj    Ctrl+C'
        OnClick = KopiujCtrlC1Click
      end
      object WklejCtrlV1: TMenuItem
        Caption = '&Wklej      Ctrl+V'
        OnClick = WklejCtrlV1Click
      end
    end
    object Format1: TMenuItem
      Caption = '&Format'
      object Zawijaniewierszy1: TMenuItem
        Caption = '&Zawijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object czcionka1: TMenuItem
        Caption = '&Czcionka'
        OnClick = czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = '&Pomoc'
      object Informacje1: TMenuItem
        Caption = '&Informacje'
        object Oprogramie1: TMenuItem
          Caption = 'O programie'
          OnClick = Oprogramie1Click
        end
        object Zapraszamnabloga1: TMenuItem
          Caption = 'Zapraszam na bloga'
          OnClick = Zapraszamnabloga1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe(TXT)|*.txt|Wszystkie pliki|*.*'
    Left = 672
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy TXT|*.txt|Dowolny plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 640
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 616
  end
end
