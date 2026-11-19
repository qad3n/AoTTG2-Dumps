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

[Token(Token = "0x2000630")]
internal abstract class BuiltinComponentInstance : BuiltinClassInstance
{
	[Token(Token = "0x4001A9D")]
	[FieldOffset(Offset = "0x30")]
	public Component Component;

	[Token(Token = "0x17000A5D")]
	public new bool Enabled
	{
		[Token(Token = "0x6003B0A")]
		[Address(RVA = "0x5A6A6C0", Offset = "0x5A696C0", VA = "0x5A6A6C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B0B")]
		[Address(RVA = "0x5A6A720", Offset = "0x5A69720", VA = "0x5A6A720")]
		set
		{
		}
	}

	[Token(Token = "0x6003B08")]
	[Address(RVA = "0x5A6A660", Offset = "0x5A69660", VA = "0x5A6A660")]
	protected BuiltinComponentInstance(Component component)
	{
	}

	[Token(Token = "0x6003B09")]
	protected static T GetOrAddComponent<T>(GameObject gameObject) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6003B0C")]
	[Address(RVA = "0x5A6A790", Offset = "0x5A69790", VA = "0x5A6A790")]
	public void Unload()
	{
	}
}
