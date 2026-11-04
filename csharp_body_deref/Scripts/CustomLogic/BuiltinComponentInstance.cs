// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.BuiltinComponentInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/BuiltinComponentInstance.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20005D1")]
internal abstract class BuiltinComponentInstance : BuiltinClassInstance
{
	[Token(Token = "0x40018FD")]
	[FieldOffset(Offset = "0x30")]
	public Component Component;

	[Token(Token = "0x17000A15")]
	public new bool Enabled
	{
		[Token(Token = "0x600387E")]
		[Address(RVA = "0x209B350", Offset = "0x2099950", VA = "0x18209B350")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600387F")]
		[Address(RVA = "0x209B3C0", Offset = "0x20999C0", VA = "0x18209B3C0")]
		set
		{
		}
	}

	[Token(Token = "0x600387C")]
	[Address(RVA = "0x209B2E0", Offset = "0x20998E0", VA = "0x18209B2E0")]
	protected BuiltinComponentInstance(Component component)
	{
	}

	[Token(Token = "0x600387D")]
	protected static T GetOrAddComponent<T>(GameObject gameObject) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6003880")]
	[Address(RVA = "0x209B240", Offset = "0x2099840", VA = "0x18209B240")]
	public void Unload()
	{
	}
}
