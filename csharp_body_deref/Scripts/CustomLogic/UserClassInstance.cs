// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserClassInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005FA")]
internal class UserClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x4001A7E")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _className;

	[Token(Token = "0x17000A4A")]
	public override string ClassName
	{
		[Token(Token = "0x6003A70")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A6F")]
	[Address(RVA = "0x20EF6E0", Offset = "0x20EDCE0", VA = "0x1820EF6E0")]
	public UserClassInstance(string className)
	{
	}
}
