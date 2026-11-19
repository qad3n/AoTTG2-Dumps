// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.UserClassInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/UserClassInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/CustomLogic/UserClassInstance.c (CustomLogic.UserClassInstance$$get_ClassName): clean
			return this._className;
		}
	}

	[Token(Token = "0x6003CFD")]
	[Address(RVA = "0x5A8FBD0", Offset = "0x5A8EBD0", VA = "0x5A8FBD0")]
	public UserClassInstance(string className)
	{
		// Lifted from source/cpp/CustomLogic/UserClassInstance.c (CustomLogic.UserClassInstance$$.ctor): clean
		Dictionary<object, object> __this_00;

		base();
		this._className = className;
		__this_00 = (Dictionary<object, object>)this.Variables;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((Il2CppObject *)"Type", (object)className);
		return;
	}
}
