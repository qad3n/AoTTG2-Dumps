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
[Token(Token = "0x2000572")]
[ComVisible(true)]
public class TextInfo : ICloneable, IDeserializationCallback
{
	[Token(Token = "0x40016D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x40016D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[OptionalField(VersionAdded = 3)]
	private string m_cultureName;

	[NonSerialized]
	[Token(Token = "0x40016D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Globalization.CultureData m_cultureData;

	[NonSerialized]
	[Token(Token = "0x40016DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string m_textInfoName;

	[NonSerialized]
	[Token(Token = "0x40016DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private bool? m_IsAsciiCasingSameAsInvariant;

	[Token(Token = "0x40016DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static TextInfo s_Invariant;

	[Token(Token = "0x40016DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[OptionalField(VersionAdded = 2)]
	private string customCultureName;

	[Token(Token = "0x40016DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[OptionalField(VersionAdded = 1)]
	internal bool m_useUserOverride;

	[Token(Token = "0x40016DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	[OptionalField(VersionAdded = 1)]
	internal int m_win32LangID;

	[Token(Token = "0x17000655")]
	internal static TextInfo Invariant
	{
		[Token(Token = "0x6002A33")]
		[Address(RVA = "0x5434AB0", Offset = "0x5433AB0", VA = "0x5434AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000656")]
	[ComVisible(false)]
	public string CultureName
	{
		[Token(Token = "0x6002A39")]
		[Address(RVA = "0x54351D0", Offset = "0x54341D0", VA = "0x54351D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000657")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x6002A3A")]
		[Address(RVA = "0x54351E0", Offset = "0x54341E0", VA = "0x54351E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000658")]
	private bool IsAsciiCasingSameAsInvariant
	{
		[Token(Token = "0x6002A45")]
		[Address(RVA = "0x54353A0", Offset = "0x54343A0", VA = "0x54353A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002A34")]
	[Address(RVA = "0x5434F80", Offset = "0x5433F80", VA = "0x5434F80")]
	internal TextInfo(System.Globalization.CultureData cultureData)
	{
	}

	[Token(Token = "0x6002A35")]
	[Address(RVA = "0x5434FF0", Offset = "0x5433FF0", VA = "0x5434FF0")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A36")]
	[Address(RVA = "0x5435020", Offset = "0x5434020", VA = "0x5435020")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002A37")]
	[Address(RVA = "0x5435130", Offset = "0x5434130", VA = "0x5435130")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A38")]
	[Address(RVA = "0x5435140", Offset = "0x5434140", VA = "0x5435140")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002A3B")]
	[Address(RVA = "0x54351F0", Offset = "0x54341F0", VA = "0x54351F0", Slot = "6")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x6002A3C")]
	[Address(RVA = "0x5435260", Offset = "0x5434260", VA = "0x5435260")]
	[ComVisible(false)]
	public static TextInfo ReadOnly(TextInfo textInfo)
	{
		return null;
	}

	[Token(Token = "0x6002A3D")]
	[Address(RVA = "0x5435330", Offset = "0x5434330", VA = "0x5435330")]
	internal void SetReadOnlyState(bool readOnly)
	{
	}

	[Token(Token = "0x6002A3E")]
	[Address(RVA = "0x5435340", Offset = "0x5434340", VA = "0x5435340", Slot = "7")]
	public virtual char ToLower(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A3F")]
	[Address(RVA = "0x5435960", Offset = "0x5434960", VA = "0x5435960", Slot = "8")]
	public virtual string ToLower(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A40")]
	[Address(RVA = "0x54354A0", Offset = "0x54344A0", VA = "0x54354A0")]
	private static char ToLowerAsciiInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A41")]
	[Address(RVA = "0x5435A80", Offset = "0x5434A80", VA = "0x5435A80", Slot = "9")]
	public virtual char ToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A42")]
	[Address(RVA = "0x5435FE0", Offset = "0x5434FE0", VA = "0x5435FE0", Slot = "10")]
	public virtual string ToUpper(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A43")]
	[Address(RVA = "0x5435AD0", Offset = "0x5434AD0", VA = "0x5435AD0")]
	internal static char ToUpperAsciiInvariant(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A44")]
	[Address(RVA = "0x5435390", Offset = "0x5434390", VA = "0x5435390")]
	private static bool IsAscii(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A46")]
	[Address(RVA = "0x5436100", Offset = "0x5435100", VA = "0x5436100", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6002A47")]
	[Address(RVA = "0x5436180", Offset = "0x5435180", VA = "0x5436180", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002A48")]
	[Address(RVA = "0x54361B0", Offset = "0x54351B0", VA = "0x54361B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002A49")]
	[Address(RVA = "0x5436200", Offset = "0x5435200", VA = "0x5436200", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002A4A")]
	[Address(RVA = "0x5436040", Offset = "0x5435040", VA = "0x5436040")]
	private string ToUpperInternal(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A4B")]
	[Address(RVA = "0x54359C0", Offset = "0x54349C0", VA = "0x54359C0")]
	private string ToLowerInternal(string str)
	{
		return null;
	}

	[Token(Token = "0x6002A4C")]
	[Address(RVA = "0x5435AE0", Offset = "0x5434AE0", VA = "0x5435AE0")]
	private char ToUpperInternal(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A4D")]
	[Address(RVA = "0x54354B0", Offset = "0x54344B0", VA = "0x54354B0")]
	private char ToLowerInternal(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002A4E")]
	[Address(RVA = "0x5436210", Offset = "0x5435210", VA = "0x5436210")]
	internal void ToUpperAsciiInvariant(ReadOnlySpan<char> source, Span<char> destination)
	{
	}

	[Token(Token = "0x6002A4F")]
	[Address(RVA = "0x5436330", Offset = "0x5435330", VA = "0x5436330")]
	internal void ChangeCase(ReadOnlySpan<char> source, Span<char> destination, bool toUpper)
	{
	}

	[Token(Token = "0x6002A50")]
	[Address(RVA = "0x5436470", Offset = "0x5435470", VA = "0x5436470")]
	internal TextInfo()
	{
	}
}
