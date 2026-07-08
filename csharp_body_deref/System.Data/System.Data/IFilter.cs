using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000062")]
internal interface IFilter
{
	[Token(Token = "0x6000664")]
	bool Invoke(DataRow row, DataRowVersion version);
}
