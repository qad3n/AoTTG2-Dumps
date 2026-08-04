// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicComponentInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicComponentInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x200047D")]
internal class CustomLogicComponentInstance : UserClassInstance
{
	[Token(Token = "0x40012C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public CustomLogicMapObjectBuiltin MapObject;

	[Token(Token = "0x40012C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public CustomLogicNetworkViewBuiltin NetworkView;

	[Token(Token = "0x40012C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MapScriptComponent _script;

	[Token(Token = "0x6002F1A")]
	[Address(RVA = "0x4156640", Offset = "0x4156640", VA = "0x4156640")]
	public CustomLogicComponentInstance(string name, MapObject obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6002F1B")]
	[Address(RVA = "0x4156700", Offset = "0x4156700", VA = "0x4156700")]
	public CustomLogicComponentInstance(string name, CustomLogicMapObjectBuiltin obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6002F1C")]
	[Address(RVA = "0x4156760", Offset = "0x4156760", VA = "0x4156760")]
	public void LoadVariables()
	{
	}

	[Token(Token = "0x6002F1D")]
	[Address(RVA = "0x4156F10", Offset = "0x4156F10", VA = "0x4156F10")]
	public bool UsesCollider()
	{
		return default(bool);
	}

	[Token(Token = "0x6002F1E")]
	[Address(RVA = "0x4155C90", Offset = "0x4155C90", VA = "0x4155C90")]
	public void OnCollisionStay(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6002F1F")]
	[Address(RVA = "0x4155970", Offset = "0x4155970", VA = "0x4155970")]
	public void OnCollisionEnter(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6002F20")]
	[Address(RVA = "0x4155FB0", Offset = "0x4155FB0", VA = "0x4155FB0")]
	public void OnCollisionExit(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6002F21")]
	[Address(RVA = "0x4154DD0", Offset = "0x4154DD0", VA = "0x4154DD0")]
	public void OnGetHit(CustomLogicCharacterBuiltin character, string name, int damage, string type, CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x6002F22")]
	[Address(RVA = "0x4155210", Offset = "0x4155210", VA = "0x4155210")]
	public void OnGetHooked(CustomLogicHumanBuiltin human, CustomLogicVector3Builtin position, bool left)
	{
	}

	[Token(Token = "0x6002F23")]
	[Address(RVA = "0x4157070", Offset = "0x4157070", VA = "0x4157070")]
	public void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x6002F24")]
	[Address(RVA = "0x4156B40", Offset = "0x4156B40", VA = "0x4156B40")]
	public static object DeserializeValue(object obj, string value)
	{
		return null;
	}
}
