using System;
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000015")]
[ExecuteInEditMode]
[UnityEngine.AssetFileNameExtension("guiskin", new string[] { })]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class GUISkin : ScriptableObject
{
	[Token(Token = "0x2000016")]
	internal delegate void SkinChangedDelegate();

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Font m_Font;

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private GUIStyle m_box;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private GUIStyle m_button;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private GUIStyle m_toggle;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private GUIStyle m_label;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private GUIStyle m_textField;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private GUIStyle m_textArea;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	private GUIStyle m_window;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private GUIStyle m_horizontalSlider;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private GUIStyle m_horizontalSliderThumb;

	[NonSerialized]
	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x68")]
	private GUIStyle m_horizontalSliderThumbExtent;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	private GUIStyle m_verticalSlider;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	private GUIStyle m_verticalSliderThumb;

	[NonSerialized]
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x80")]
	private GUIStyle m_verticalSliderThumbExtent;

	[NonSerialized]
	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x88")]
	private GUIStyle m_SliderMixed;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbar;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbarThumb;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbarLeftButton;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private GUIStyle m_horizontalScrollbarRightButton;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private GUIStyle m_verticalScrollbar;

	[Token(Token = "0x4000094")]
	[FieldOffset(Offset = "0xB8")]
	[SerializeField]
	private GUIStyle m_verticalScrollbarThumb;

	[Token(Token = "0x4000095")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private GUIStyle m_verticalScrollbarUpButton;

	[Token(Token = "0x4000096")]
	[FieldOffset(Offset = "0xC8")]
	[SerializeField]
	private GUIStyle m_verticalScrollbarDownButton;

	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private GUIStyle m_ScrollView;

	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	internal GUIStyle[] m_CustomStyles;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	private GUISettings m_Settings;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x0")]
	internal static GUIStyle ms_Error;

	[Token(Token = "0x400009B")]
	[FieldOffset(Offset = "0xE8")]
	private Dictionary<string, GUIStyle> m_Styles;

	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x8")]
	internal static SkinChangedDelegate m_SkinChanged;

	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x10")]
	internal static GUISkin current;

	[Token(Token = "0x1700003A")]
	public Font font
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x4B1F530", Offset = "0x4B1F530", VA = "0x4B1F530")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x4B2B930", Offset = "0x4B2B930", VA = "0x4B2B930")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	public GUIStyle box
	{
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x4B1C830", Offset = "0x4B1C830", VA = "0x4B1C830")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x4B2BB60", Offset = "0x4B2BB60", VA = "0x4B2BB60")]
		set
		{
		}
	}

	[Token(Token = "0x1700003C")]
	public GUIStyle label
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x4B1AC50", Offset = "0x4B1AC50", VA = "0x4B1AC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x4B2BBF0", Offset = "0x4B2BBF0", VA = "0x4B2BBF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public GUIStyle textField
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x4B1D9F0", Offset = "0x4B1D9F0", VA = "0x4B1D9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x4B2BC80", Offset = "0x4B2BC80", VA = "0x4B2BC80")]
		set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public GUIStyle textArea
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x4B2BD10", Offset = "0x4B2BD10", VA = "0x4B2BD10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x4B2BD20", Offset = "0x4B2BD20", VA = "0x4B2BD20")]
		set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public GUIStyle button
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x4B1CD00", Offset = "0x4B1CD00", VA = "0x4B1CD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x4B2BDB0", Offset = "0x4B2BDB0", VA = "0x4B2BDB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public GUIStyle toggle
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x4B27A20", Offset = "0x4B27A20", VA = "0x4B27A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x4B2BE40", Offset = "0x4B2BE40", VA = "0x4B2BE40")]
		set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public GUIStyle window
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x4B293D0", Offset = "0x4B293D0", VA = "0x4B293D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x4B2BED0", Offset = "0x4B2BED0", VA = "0x4B2BED0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public GUIStyle horizontalSlider
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x4B27D10", Offset = "0x4B27D10", VA = "0x4B27D10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x4B2BF60", Offset = "0x4B2BF60", VA = "0x4B2BF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public GUIStyle horizontalSliderThumb
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x4B27D20", Offset = "0x4B27D20", VA = "0x4B27D20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x4B2BFF0", Offset = "0x4B2BFF0", VA = "0x4B2BFF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	internal GUIStyle horizontalSliderThumbExtent
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x4B2C080", Offset = "0x4B2C080", VA = "0x4B2C080")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x4B2C090", Offset = "0x4B2C090", VA = "0x4B2C090")]
		set
		{
		}
	}

	[Token(Token = "0x17000045")]
	internal GUIStyle sliderMixed
	{
		[Token(Token = "0x600011A")]
		[Address(RVA = "0x4B2C120", Offset = "0x4B2C120", VA = "0x4B2C120")]
		get
		{
			return null;
		}
		[Token(Token = "0x600011B")]
		[Address(RVA = "0x4B2C130", Offset = "0x4B2C130", VA = "0x4B2C130")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public GUIStyle verticalSlider
	{
		[Token(Token = "0x600011C")]
		[Address(RVA = "0x4B2C1C0", Offset = "0x4B2C1C0", VA = "0x4B2C1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600011D")]
		[Address(RVA = "0x4B2C1D0", Offset = "0x4B2C1D0", VA = "0x4B2C1D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public GUIStyle verticalSliderThumb
	{
		[Token(Token = "0x600011E")]
		[Address(RVA = "0x4B2C260", Offset = "0x4B2C260", VA = "0x4B2C260")]
		get
		{
			return null;
		}
		[Token(Token = "0x600011F")]
		[Address(RVA = "0x4B2C270", Offset = "0x4B2C270", VA = "0x4B2C270")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	internal GUIStyle verticalSliderThumbExtent
	{
		[Token(Token = "0x6000120")]
		[Address(RVA = "0x4B2C300", Offset = "0x4B2C300", VA = "0x4B2C300")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x4B2C310", Offset = "0x4B2C310", VA = "0x4B2C310")]
		set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public GUIStyle horizontalScrollbar
	{
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x4B223D0", Offset = "0x4B223D0", VA = "0x4B223D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x4B2C3A0", Offset = "0x4B2C3A0", VA = "0x4B2C3A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004A")]
	public GUIStyle horizontalScrollbarThumb
	{
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x4B2C430", Offset = "0x4B2C430", VA = "0x4B2C430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x4B2C440", Offset = "0x4B2C440", VA = "0x4B2C440")]
		set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public GUIStyle horizontalScrollbarLeftButton
	{
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x4B2C4D0", Offset = "0x4B2C4D0", VA = "0x4B2C4D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x4B2C4E0", Offset = "0x4B2C4E0", VA = "0x4B2C4E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004C")]
	public GUIStyle horizontalScrollbarRightButton
	{
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x4B2C570", Offset = "0x4B2C570", VA = "0x4B2C570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x4B2C580", Offset = "0x4B2C580", VA = "0x4B2C580")]
		set
		{
		}
	}

	[Token(Token = "0x1700004D")]
	public GUIStyle verticalScrollbar
	{
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x4B223E0", Offset = "0x4B223E0", VA = "0x4B223E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x4B2C610", Offset = "0x4B2C610", VA = "0x4B2C610")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public GUIStyle verticalScrollbarThumb
	{
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x4B2C6A0", Offset = "0x4B2C6A0", VA = "0x4B2C6A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x4B2C6B0", Offset = "0x4B2C6B0", VA = "0x4B2C6B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public GUIStyle verticalScrollbarUpButton
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x4B2C740", Offset = "0x4B2C740", VA = "0x4B2C740")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x4B2C750", Offset = "0x4B2C750", VA = "0x4B2C750")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public GUIStyle verticalScrollbarDownButton
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x4B2C7E0", Offset = "0x4B2C7E0", VA = "0x4B2C7E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x4B2C7F0", Offset = "0x4B2C7F0", VA = "0x4B2C7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public GUIStyle scrollView
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x4B223F0", Offset = "0x4B223F0", VA = "0x4B223F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x4B2C880", Offset = "0x4B2C880", VA = "0x4B2C880")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public GUIStyle[] customStyles
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x4B2C910", Offset = "0x4B2C910", VA = "0x4B2C910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x4B2C920", Offset = "0x4B2C920", VA = "0x4B2C920")]
		set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public GUISettings settings
	{
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x4B1F4D0", Offset = "0x4B1F4D0", VA = "0x4B1F4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000054")]
	internal static GUIStyle error
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x4B2C9B0", Offset = "0x4B2C9B0", VA = "0x4B2C9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4B2B6E0", Offset = "0x4B2B6E0", VA = "0x4B2B6E0")]
	public GUISkin()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4B2B7C0", Offset = "0x4B2B7C0", VA = "0x4B2B7C0")]
	internal void OnEnable()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4B2B8C0", Offset = "0x4B2B8C0", VA = "0x4B2B8C0")]
	internal static void CleanupRoots()
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4B2B840", Offset = "0x4B2B840", VA = "0x4B2B840")]
	internal void Apply()
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x4B2CC00", Offset = "0x4B2CC00", VA = "0x4B2CC00")]
	private void BuildStyleCache()
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4B208C0", Offset = "0x4B208C0", VA = "0x4B208C0")]
	public GUIStyle GetStyle(string styleName)
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4B2EE60", Offset = "0x4B2EE60", VA = "0x4B2EE60")]
	public GUIStyle FindStyle(string styleName)
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4B1A7A0", Offset = "0x4B1A7A0", VA = "0x4B1A7A0")]
	internal void MakeCurrent()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4B2EF00", Offset = "0x4B2EF00", VA = "0x4B2EF00")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}
}
