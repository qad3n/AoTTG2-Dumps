// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicComponentInstance
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicComponentInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x20005D3")]
internal class CustomLogicComponentInstance : UserClassInstance
{
	[Token(Token = "0x4001900")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public CustomLogicMapObjectBuiltin MapObject;

	[Token(Token = "0x4001901")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public CustomLogicNetworkViewBuiltin NetworkView;

	[Token(Token = "0x4001902")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MapScriptComponent _script;

	[Token(Token = "0x4001903")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly HashSet<CustomLogicLineRendererBuiltin> _lineRenderers;

	[Token(Token = "0x17000A16")]
	public override bool Enabled
	{
		[Token(Token = "0x600388C")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600388D")]
		[Address(RVA = "0x209F560", Offset = "0x209DB60", VA = "0x18209F560", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x600388E")]
	[Address(RVA = "0x209F1A0", Offset = "0x209D7A0", VA = "0x18209F1A0")]
	public void RegisterLineRenderer(CustomLogicLineRendererBuiltin lineRenderer)
	{
	}

	[Token(Token = "0x600388F")]
	[Address(RVA = "0x209F200", Offset = "0x209D800", VA = "0x18209F200")]
	public void UnregisterLineRenderer(CustomLogicLineRendererBuiltin lineRenderer)
	{
	}

	[Token(Token = "0x6003890")]
	[Address(RVA = "0x209E520", Offset = "0x209CB20", VA = "0x18209E520")]
	public void DestroyLineRenderers()
	{
	}

	[Token(Token = "0x6003891")]
	[Address(RVA = "0x209F390", Offset = "0x209D990", VA = "0x18209F390")]
	public CustomLogicComponentInstance(string name, MapObject obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6003892")]
	[Address(RVA = "0x209F4A0", Offset = "0x209DAA0", VA = "0x18209F4A0")]
	public CustomLogicComponentInstance(string name, CustomLogicMapObjectBuiltin obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
	}

	[Token(Token = "0x6003893")]
	[Address(RVA = "0x209E670", Offset = "0x209CC70", VA = "0x18209E670")]
	public void LoadVariables()
	{
	}

	[Token(Token = "0x6003894")]
	[Address(RVA = "0x209F260", Offset = "0x209D860", VA = "0x18209F260")]
	public bool UsesCollider()
	{
		return default(bool);
	}

	[Token(Token = "0x6003895")]
	[Address(RVA = "0x209ED00", Offset = "0x209D300", VA = "0x18209ED00")]
	public void OnCollisionStay(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6003896")]
	[Address(RVA = "0x209EB00", Offset = "0x209D100", VA = "0x18209EB00")]
	public void OnCollisionEnter(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6003897")]
	[Address(RVA = "0x209EC00", Offset = "0x209D200", VA = "0x18209EC00")]
	public void OnCollisionExit(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
	}

	[Token(Token = "0x6003898")]
	[Address(RVA = "0x209EE00", Offset = "0x209D400", VA = "0x18209EE00")]
	public void OnGetHit(CustomLogicCharacterBuiltin character, string name, int damage, string type, CustomLogicVector3Builtin position)
	{
	}

	[Token(Token = "0x6003899")]
	[Address(RVA = "0x209F020", Offset = "0x209D620", VA = "0x18209F020")]
	public void OnGetHooked(CustomLogicHumanBuiltin human, CustomLogicVector3Builtin position, bool left)
	{
	}

	[Token(Token = "0x600389A")]
	[Address(RVA = "0x209E5A0", Offset = "0x209CBA0", VA = "0x18209E5A0")]
	public void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
	}

	[Token(Token = "0x600389B")]
	[Address(RVA = "0x209DF70", Offset = "0x209C570", VA = "0x18209DF70")]
	public static object DeserializeValue(object obj, string value)
	{
		return null;
	}
}
