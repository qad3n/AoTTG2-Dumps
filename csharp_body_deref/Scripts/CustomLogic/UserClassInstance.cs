// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserClassInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000659")]
internal class UserClassInstance : CustomLogicClassInstance
{
	[Token(Token = "0x4001C1F")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _className;

	[Token(Token = "0x17000A92")]
	public override string ClassName
	{
		[Token(Token = "0x6003CFE")]
		[Address(RVA = "0x5A8FC50", Offset = "0x5A8EC50", VA = "0x5A8FC50", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003CFD")]
	[Address(RVA = "0x5A8FBD0", Offset = "0x5A8EBD0", VA = "0x5A8FBD0")]
	public UserClassInstance(string className)
	{
	}
}
