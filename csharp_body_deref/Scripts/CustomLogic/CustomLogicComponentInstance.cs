// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicComponentInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicComponentInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x2000632")]
internal class CustomLogicComponentInstance : UserClassInstance
{
	[Token(Token = "0x4001AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public CustomLogicMapObjectBuiltin MapObject;

	[Token(Token = "0x4001AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public CustomLogicNetworkViewBuiltin NetworkView;

	[Token(Token = "0x4001AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MapScriptComponent _script;

	[Token(Token = "0x4001AA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly HashSet<CustomLogicLineRendererBuiltin> _lineRenderers;

	[Token(Token = "0x17000A5E")]
	public override bool Enabled
	{
		[Token(Token = "0x6003B1A")]
		[Address(RVA = "0x5A6C560", Offset = "0x5A6B560", VA = "0x5A6C560", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B1B")]
		[Address(RVA = "0x5A6C570", Offset = "0x5A6B570", VA = "0x5A6C570", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6003B1C")]
	[Address(RVA = "0x5A6C610", Offset = "0x5A6B610", VA = "0x5A6C610")]
	public void RegisterLineRenderer(CustomLogicLineRendererBuiltin lineRenderer)
	{
	}

	[Token(Token = "0x6003B1D")]
	[Address(RVA = "0x5A6C660", Offset = "0x5A6B660", VA = "0x5A6C660")]
	public void UnregisterLineRenderer(CustomLogicLineRendererBuiltin lineRenderer)
	{
	}

	[Token(Token = "0x6003B1E")]
	[Address(RVA = "0x5A6C580", Offset = "0x5A6B580", VA = "0x5A6C580")]
	public void DestroyLineRenderers()
	{
	}

	[Token(Token = "0x6003B1F")]
	[Address(RVA = "0x5A6C6B0", Offset = "0x5A6B6B0", VA = "0x5A6C6B0")]
	public CustomLogicComponentInstance(string name, MapObject obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6003B20")]
	[Address(RVA = "0x5A6C7C0", Offset = "0x5A6B7C0", VA = "0x5A6C7C0")]
	public CustomLogicComponentInstance(string name, CustomLogicMapObjectBuiltin obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6003B21")]
	[Address(RVA = "0x5A6C890", Offset = "0x5A6B890", VA = "0x5A6C890")]
	public void LoadVariables()
	{
	}

	[Token(Token = "0x6003B22")]
	[Address(RVA = "0x5A6D9C0", Offset = "0x5A6C9C0", VA = "0x5A6D9C0")]
	public bool UsesCollider()
	{
		return default(bool);
	}

	[Token(Token = "0x6003B23")]
	[Address(RVA = "0x5A6B820", Offset = "0x5A6A820", VA = "0x5A6B820")]
	public void OnCollisionStay(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6003B24")]
	[Address(RVA = "0x5A6B510", Offset = "0x5A6A510", VA = "0x5A6B510")]
	public void OnCollisionEnter(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6003B25")]
	[Address(RVA = "0x5A6BB30", Offset = "0x5A6AB30", VA = "0x5A6BB30")]
	public void OnCollisionExit(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6003B26")]
	[Address(RVA = "0x5A6AD70", Offset = "0x5A69D70", VA = "0x5A6AD70")]
	public void OnGetHit(CustomLogicCharacterBuiltin character, string name, int damage, string type, CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x6003B27")]
	[Address(RVA = "0x5A6B1B0", Offset = "0x5A6A1B0", VA = "0x5A6B1B0")]
	public void OnGetHooked(CustomLogicHumanBuiltin human, CustomLogicVector3Builtin position, bool left)
	{
	}

	[Token(Token = "0x6003B28")]
	[Address(RVA = "0x5A6DBC0", Offset = "0x5A6CBC0", VA = "0x5A6DBC0")]
	public void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x6003B29")]
	[Address(RVA = "0x5A6CE50", Offset = "0x5A6BE50", VA = "0x5A6CE50")]
	public static object DeserializeValue(object obj, string value)
	{
		return null;
	}
}
