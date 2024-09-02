object Form6: TForm6
  Left = 348
  Top = 331
  Width = 469
  Height = 366
  Caption = #1042#1093#1110#1076' '#1074' '#1072#1076#1084#1110#1085'-'#1087#1072#1085#1077#1083#1100
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 200
    Top = 64
    Width = 40
    Height = 16
    Caption = #1051#1086#1075#1110#1085
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 200
    Top = 128
    Width = 56
    Height = 16
    Caption = #1055#1072#1088#1086#1083#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label49: TLabel
    Left = 390
    Top = 312
    Width = 63
    Height = 13
    Caption = 'GrandRaycer'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 160
    Top = 88
    Width = 121
    Height = 21
    Hint = #1042#1074#1077#1076#1110#1090#1100' '#1083#1086#1075#1110#1085
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
  end
  object BitBtn1: TBitBtn
    Left = 184
    Top = 192
    Width = 75
    Height = 25
    Caption = #1042#1074#1110#1081#1090#1080
    TabOrder = 1
    OnClick = BitBtn1Click
    Glyph.Data = {
      76010000424D7601000000000000760000002800000020000000100000000100
      04000000000000010000120B0000120B00001000000000000000000000000000
      800000800000008080008000000080008000808000007F7F7F00BFBFBF000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00333333333333
      33333FF3333333333333447333333333333377FFF33333333333744473333333
      333337773FF3333333333444447333333333373F773FF3333333334444447333
      33333373F3773FF3333333744444447333333337F333773FF333333444444444
      733333373F3333773FF333334444444444733FFF7FFFFFFF77FF999999999999
      999977777777777733773333CCCCCCCCCC3333337333333F7733333CCCCCCCCC
      33333337F3333F773333333CCCCCCC3333333337333F7733333333CCCCCC3333
      333333733F77333333333CCCCC333333333337FF7733333333333CCC33333333
      33333777333333333333CC333333333333337733333333333333}
    NumGlyphs = 2
  end
  object MaskEdit1: TMaskEdit
    Left = 160
    Top = 152
    Width = 121
    Height = 21
    Hint = #1042#1074#1077#1076#1110#1090#1100' '#1087#1072#1088#1086#1083#1100
    ParentShowHint = False
    PasswordChar = '*'
    ShowHint = True
    TabOrder = 2
    OnChange = MaskEdit1Change
  end
end
