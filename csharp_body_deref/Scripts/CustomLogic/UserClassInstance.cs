// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserClassInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20004A1")]
internal class UserClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x4001433")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _className;

	[Token(Token = "0x17000953")]
	public override string ClassName
	{
		[Token(Token = "0x60030E8")]
		[Address(RVA = "0x417AC40", Offset = "0x417AC40", VA = "0x417AC40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60030E7")]
	[Address(RVA = "0x416FBC0", Offset = "0x416FBC0", VA = "0x416FBC0")]
	public UserClassInstance(string className)
	{
	}
}
