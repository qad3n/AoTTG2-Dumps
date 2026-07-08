using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x2000438")]
internal class CustomLogicComponentInstance : UserClassInstance
{
	[Token(Token = "0x40011B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public CustomLogicMapObjectBuiltin MapObject;

	[Token(Token = "0x40011B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public CustomLogicNetworkViewBuiltin NetworkView;

	[Token(Token = "0x40011B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MapScriptComponent _script;

	[Token(Token = "0x6002D12")]
	[Address(RVA = "0x3E4B1C0", Offset = "0x3E4B1C0", VA = "0x3E4B1C0")]
	public CustomLogicComponentInstance(string name, MapObject obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6002D13")]
	[Address(RVA = "0x3E4B280", Offset = "0x3E4B280", VA = "0x3E4B280")]
	public CustomLogicComponentInstance(string name, CustomLogicMapObjectBuiltin obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6002D14")]
	[Address(RVA = "0x3E4B2E0", Offset = "0x3E4B2E0", VA = "0x3E4B2E0")]
	public void LoadVariables()
	{
	}

	[Token(Token = "0x6002D15")]
	[Address(RVA = "0x3E4BA90", Offset = "0x3E4BA90", VA = "0x3E4BA90")]
	public bool UsesCollider()
	{
		return default(bool);
	}

	[Token(Token = "0x6002D16")]
	[Address(RVA = "0x3E4A810", Offset = "0x3E4A810", VA = "0x3E4A810")]
	public void OnCollisionStay(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6002D17")]
	[Address(RVA = "0x3E4A4F0", Offset = "0x3E4A4F0", VA = "0x3E4A4F0")]
	public void OnCollisionEnter(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6002D18")]
	[Address(RVA = "0x3E4AB30", Offset = "0x3E4AB30", VA = "0x3E4AB30")]
	public void OnCollisionExit(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6002D19")]
	[Address(RVA = "0x3E498B0", Offset = "0x3E498B0", VA = "0x3E498B0")]
	public void OnGetHit(CustomLogicCharacterBuiltin character, string name, int damage, string type, CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x6002D1A")]
	[Address(RVA = "0x3E49CF0", Offset = "0x3E49CF0", VA = "0x3E49CF0")]
	public void OnGetHooked(CustomLogicHumanBuiltin human, CustomLogicVector3Builtin position, bool left)
	{
	}

	[Token(Token = "0x6002D1B")]
	[Address(RVA = "0x3E4BBF0", Offset = "0x3E4BBF0", VA = "0x3E4BBF0")]
	public void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x6002D1C")]
	[Address(RVA = "0x3E4B6C0", Offset = "0x3E4B6C0", VA = "0x3E4B6C0")]
	public static object DeserializeValue(object obj, string value)
	{
		return null;
	}
}
