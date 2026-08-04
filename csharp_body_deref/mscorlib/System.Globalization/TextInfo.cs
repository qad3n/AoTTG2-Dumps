// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TextInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x20005C5")]
[ComVisible(true)]
public class TextInfo : ICloneable, IDeserializationCallback
{
	[Token(Token = "0x400194F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_listSeparator;

	[Token(Token = "0x4001950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x4001951")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 3)]
	private string m_cultureName;

	[NonSerialized]
	[Token(Token = "0x4001952")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private System.Globalization.CultureData m_cultureData;

	[NonSerialized]
	[Token(Token = "0x4001953")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string m_textInfoName;

	[NonSerialized]
	[Token(Token = "0x4001954")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private bool? m_IsAsciiCasingSameAsInvariant;

	[Token(Token = "0x4001955")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static TextInfo s_Invariant;

	[Token(Token = "0x4001956")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 2)]
	private string customCultureName;

	[Token(Token = "0x4001957")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[OptionalField(VersionAdded = 1)]
	internal int m_nDataItem;

	[Token(Token = "0x4001958")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[Token(Token = "0x4001959")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[OptionalField(VersionAdded = 1)]
	internal int m_win32LangID;

	[Token(Token = "0x400195A")]
	private const int wordSeparatorMask = 536672256;

	[Token(Token = "0x170006C7")]
	internal static TextInfo Invariant
	{
		[Token(Token = "0x6002D47")]
		[Address(RVA = "0x3C5FA60", Offset = "0x3C5FA60", VA = "0x3C5FA60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C8")]
	[ComVisible(false)]
	public string CultureName
	{
		[Token(Token = "0x6002D4D")]
		[Address(RVA = "0x3C60640", Offset = "0x3C60640", VA = "0x3C60640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006C9")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002D4E")]
		[Address(RVA = "0x3C60650", Offset = "0x3C60650", VA = "0x3C60650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006CA")]
	private bool IsAsciiCasingSameAsInvariant
	{
		[Token(Token = "0x6002D59")]
		[Address(RVA = "0x3C60810", Offset = "0x3C60810", VA = "0x3C60810")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002D48")]
	[Address(RVA = "0x3C5FF30", Offset = "0x3C5FF30", VA = "0x3C5FF30")]
	internal TextInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x6002D49")]
	[Address(RVA = "0x3C5FFA0", Offset = "0x3C5FFA0", VA = "0x3C5FFA0")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D4A")]
	[Address(RVA = "0x3C5FFD0", Offset = "0x3C5FFD0", VA = "0x3C5FFD0")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002D4B")]
	[Address(RVA = "0x3C605A0", Offset = "0x3C605A0", VA = "0x3C605A0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D4C")]
	[Address(RVA = "0x3C605B0", Offset = "0x3C605B0", VA = "0x3C605B0")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002D4F")]
	[Address(RVA = "0x3C60660", Offset = "0x3C60660", VA = "0x3C60660", Slot = "6")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002D50")]
	[Address(RVA = "0x3C606D0", Offset = "0x3C606D0", VA = "0x3C606D0")]
	[ComVisible(false)]
	public static TextInfo ReadOnly(TextInfo textInfo)
	{
		return null;
	}

	[Token(Token = "0x6002D51")]
	[Address(RVA = "0x3C607A0", Offset = "0x3C607A0", VA = "0x3C607A0")]
	internal void SetReadOnlyState(bool readOnly)
	{
	}

	[Token(Token = "0x6002D52")]
	[Address(RVA = "0x3C607B0", Offset = "0x3C607B0", VA = "0x3C607B0", Slot = "7")]
	public virtual char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002D53")]
	[Address(RVA = "0x3C60E00", Offset = "0x3C60E00", VA = "0x3C60E00", Slot = "8")]
	public virtual string ToLower(string str)
	{
		return null;
	}

	[Token(Token = "0x6002D54")]
	[Address(RVA = "0x3C60910", Offset = "0x3C60910", VA = "0x3C60910")]
	private static char ToLowerAsciiInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002D55")]
	[Address(RVA = "0x3C60F20", Offset = "0x3C60F20", VA = "0x3C60F20", Slot = "9")]
	public virtual char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002D56")]
	[Address(RVA = "0x3C61480", Offset = "0x3C61480", VA = "0x3C61480", Slot = "10")]
	public virtual string ToUpper(string str)
	{
		return null;
	}

	[Token(Token = "0x6002D57")]
	[Address(RVA = "0x3C60F70", Offset = "0x3C60F70", VA = "0x3C60F70")]
	internal static char ToUpperAsciiInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002D58")]
	[Address(RVA = "0x3C60800", Offset = "0x3C60800", VA = "0x3C60800")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5A")]
	[Address(RVA = "0x3C615A0", Offset = "0x3C615A0", VA = "0x3C615A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5B")]
	[Address(RVA = "0x3C61630", Offset = "0x3C61630", VA = "0x3C61630", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002D5C")]
	[Address(RVA = "0x3C61660", Offset = "0x3C61660", VA = "0x3C61660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002D5D")]
	[Address(RVA = "0x3C616B0", Offset = "0x3C616B0", VA = "0x3C616B0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002D5E")]
	[Address(RVA = "0x3C614D0", Offset = "0x3C614D0", VA = "0x3C614D0")]
	private string ToUpperInternal(string str)
	{
		return null;
	}

	[Token(Token = "0x6002D5F")]
	[Address(RVA = "0x3C60E50", Offset = "0x3C60E50", VA = "0x3C60E50")]
	private string ToLowerInternal(string str)
	{
		return null;
	}

	[Token(Token = "0x6002D60")]
	[Address(RVA = "0x3C60F90", Offset = "0x3C60F90", VA = "0x3C60F90")]
	private char ToUpperInternal(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002D61")]
	[Address(RVA = "0x3C60930", Offset = "0x3C60930", VA = "0x3C60930")]
	private char ToLowerInternal(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002D62")]
	[Address(RVA = "0x3C616C0", Offset = "0x3C616C0", VA = "0x3C616C0")]
	internal void ToUpperAsciiInvariant(ReadOnlySpan<char> source, Span<char> destination)
	{
	}

	[Token(Token = "0x6002D63")]
	[Address(RVA = "0x3C61740", Offset = "0x3C61740", VA = "0x3C61740")]
	internal void ChangeCase(ReadOnlySpan<char> source, Span<char> destination, bool toUpper)
	{
	}

	[Token(Token = "0x6002D64")]
	[Address(RVA = "0x3C61880", Offset = "0x3C61880", VA = "0x3C61880")]
	internal TextInfo()
	{
	}
}
