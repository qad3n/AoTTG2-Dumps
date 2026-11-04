// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.TextInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x2000597")]
[ComVisible(true)]
public class TextInfo : ICloneable, IDeserializationCallback
{
	[Token(Token = "0x4001770")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x4001771")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[OptionalField(VersionAdded = 3)]
	private string m_cultureName;

	[NonSerialized]
	[Token(Token = "0x4001772")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Globalization.CultureData m_cultureData;

	[NonSerialized]
	[Token(Token = "0x4001773")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string m_textInfoName;

	[NonSerialized]
	[Token(Token = "0x4001774")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool? m_IsAsciiCasingSameAsInvariant;

	[Token(Token = "0x4001775")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static TextInfo s_Invariant;

	[Token(Token = "0x4001776")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 2)]
	private string customCultureName;

	[Token(Token = "0x4001777")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[Token(Token = "0x4001778")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[OptionalField(VersionAdded = 1)]
	internal int m_win32LangID;

	[Token(Token = "0x17000654")]
	internal static TextInfo Invariant
	{
		[Token(Token = "0x6002A54")]
		[Address(RVA = "0x1AADD00", Offset = "0x1AAC300", VA = "0x181AADD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000655")]
	[ComVisible(false)]
	public string CultureName
	{
		[Token(Token = "0x6002A5A")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000656")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002A5B")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000657")]
	private bool IsAsciiCasingSameAsInvariant
	{
		[Token(Token = "0x6002A66")]
		[Address(RVA = "0x1AADE10", Offset = "0x1AAC410", VA = "0x181AADE10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002A55")]
	[Address(RVA = "0x1AADC60", Offset = "0x1AAC260", VA = "0x181AADC60")]
	internal TextInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x6002A56")]
	[Address(RVA = "0x1AAC900", Offset = "0x1AAAF00", VA = "0x181AAC900")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A57")]
	[Address(RVA = "0x1AAC7C0", Offset = "0x1AAADC0", VA = "0x181AAC7C0")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002A58")]
	[Address(RVA = "0x1AAC8F0", Offset = "0x1AAAEF0", VA = "0x181AAC8F0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A59")]
	[Address(RVA = "0x1AAC940", Offset = "0x1AAAF40", VA = "0x181AAC940")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A5C")]
	[Address(RVA = "0x1AAC670", Offset = "0x1AAAC70", VA = "0x181AAC670", Slot = "6")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002A5D")]
	[Address(RVA = "0x1AAC9D0", Offset = "0x1AAAFD0", VA = "0x181AAC9D0")]
	[ComVisible(false)]
	public static TextInfo ReadOnly(TextInfo textInfo)
	{
		return null;
	}

	[Token(Token = "0x6002A5E")]
	[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
	internal void SetReadOnlyState(bool readOnly)
	{
	}

	[Token(Token = "0x6002A5F")]
	[Address(RVA = "0x1AAD100", Offset = "0x1AAB700", VA = "0x181AAD100", Slot = "7")]
	public virtual char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A60")]
	[Address(RVA = "0x1AAD170", Offset = "0x1AAB770", VA = "0x181AAD170", Slot = "8")]
	public virtual string ToLower(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A61")]
	[Address(RVA = "0x1AACAB0", Offset = "0x1AAB0B0", VA = "0x181AACAB0")]
	private static char ToLowerAsciiInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A62")]
	[Address(RVA = "0x1AADBF0", Offset = "0x1AAC1F0", VA = "0x181AADBF0", Slot = "9")]
	public virtual char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A63")]
	[Address(RVA = "0x1AADAD0", Offset = "0x1AAC0D0", VA = "0x181AADAD0", Slot = "10")]
	public virtual string ToUpper(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A64")]
	[Address(RVA = "0x1AAD390", Offset = "0x1AAB990", VA = "0x181AAD390")]
	internal static char ToUpperAsciiInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A65")]
	[Address(RVA = "0x1AAC7B0", Offset = "0x1AAADB0", VA = "0x181AAC7B0")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A67")]
	[Address(RVA = "0x1AAC6F0", Offset = "0x1AAACF0", VA = "0x181AAC6F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A68")]
	[Address(RVA = "0x1AAC780", Offset = "0x1AAAD80", VA = "0x181AAC780", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002A69")]
	[Address(RVA = "0x1AAD290", Offset = "0x1AAB890", VA = "0x181AAD290", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002A6A")]
	[Address(RVA = "0x1AAC8F0", Offset = "0x1AAAEF0", VA = "0x181AAC8F0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002A6B")]
	[Address(RVA = "0x1AAD9F0", Offset = "0x1AABFF0", VA = "0x181AAD9F0")]
	private string ToUpperInternal(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A6C")]
	[Address(RVA = "0x1AAD020", Offset = "0x1AAB620", VA = "0x181AAD020")]
	private string ToLowerInternal(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A6D")]
	[Address(RVA = "0x1AAD3B0", Offset = "0x1AAB9B0", VA = "0x181AAD3B0")]
	private char ToUpperInternal(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A6E")]
	[Address(RVA = "0x1AACAD0", Offset = "0x1AAB0D0", VA = "0x181AACAD0")]
	private char ToLowerInternal(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A6F")]
	[Address(RVA = "0x1AAD2E0", Offset = "0x1AAB8E0", VA = "0x181AAD2E0")]
	internal void ToUpperAsciiInvariant(ReadOnlySpan<char> source, Span<char> destination)
	{
	}

	[Token(Token = "0x6002A70")]
	[Address(RVA = "0x1AAC520", Offset = "0x1AAAB20", VA = "0x181AAC520")]
	internal void ChangeCase(ReadOnlySpan<char> source, Span<char> destination, bool toUpper)
	{
	}

	[Token(Token = "0x6002A71")]
	[Address(RVA = "0x1AADCD0", Offset = "0x1AAC2D0", VA = "0x181AADCD0")]
	internal TextInfo()
	{
	}
}
