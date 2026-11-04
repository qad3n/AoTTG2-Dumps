// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.IFormatterConverter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003F7")]
[CLSCompliant(false)]
public interface IFormatterConverter
{
	[Token(Token = "0x6001F8E")]
	object Convert(object value, Type type);

	[Token(Token = "0x6001F8F")]
	bool ToBoolean(object value);

	[Token(Token = "0x6001F90")]
	int ToInt32(object value);

	[Token(Token = "0x6001F91")]
	long ToInt64(object value);

	[Token(Token = "0x6001F92")]
	float ToSingle(object value);

	[Token(Token = "0x6001F93")]
	string ToString(object value);
}
