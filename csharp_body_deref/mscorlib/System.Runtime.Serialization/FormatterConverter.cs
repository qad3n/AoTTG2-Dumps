// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.FormatterConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003FF")]
public class FormatterConverter : IFormatterConverter
{
	[Token(Token = "0x6001FAA")]
	[Address(RVA = "0x19FAC60", Offset = "0x19F9260", VA = "0x1819FAC60", Slot = "4")]
	public object Convert(object value, Type type)
	{
		return null;
	}

	[Token(Token = "0x6001FAB")]
	[Address(RVA = "0x19FAD50", Offset = "0x19F9350", VA = "0x1819FAD50", Slot = "5")]
	public bool ToBoolean(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FAC")]
	[Address(RVA = "0x19FADE0", Offset = "0x19F93E0", VA = "0x1819FADE0", Slot = "6")]
	public int ToInt32(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6001FAD")]
	[Address(RVA = "0x19FAE70", Offset = "0x19F9470", VA = "0x1819FAE70", Slot = "7")]
	public long ToInt64(object value)
	{
		return default(long);
	}

	[Token(Token = "0x6001FAE")]
	[Address(RVA = "0x19FAF00", Offset = "0x19F9500", VA = "0x1819FAF00", Slot = "8")]
	public float ToSingle(object value)
	{
		return default(float);
	}

	[Token(Token = "0x6001FAF")]
	[Address(RVA = "0x19FAF90", Offset = "0x19F9590", VA = "0x1819FAF90", Slot = "9")]
	public string ToString(object value)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6001FB0")]
	[Address(RVA = "0x19FAD00", Offset = "0x19F9300", VA = "0x1819FAD00")]
	private static void ThrowValueNullException()
	{
	}

	[Token(Token = "0x6001FB1")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public FormatterConverter()
	{
	}
}
