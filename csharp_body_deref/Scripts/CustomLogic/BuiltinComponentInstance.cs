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

[Token(Token = "0x200047B")]
internal abstract class BuiltinComponentInstance : BuiltinClassInstance
{
	[Token(Token = "0x40012BD")]
	[FieldOffset(Offset = "0x30")]
	public Component Component;

	[Token(Token = "0x17000920")]
	public new bool Enabled
	{
		[Token(Token = "0x6002F0C")]
		[Address(RVA = "0x4154750", Offset = "0x4154750", VA = "0x4154750")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002F0D")]
		[Address(RVA = "0x41547C0", Offset = "0x41547C0", VA = "0x41547C0")]
		set
		{
		}
	}

	[Token(Token = "0x6002F0A")]
	[Address(RVA = "0x41546F0", Offset = "0x41546F0", VA = "0x41546F0")]
	protected BuiltinComponentInstance(Component component)
	{
	}

	[Token(Token = "0x6002F0B")]
	protected static T GetOrAddComponent<T>(GameObject gameObject) where T : Component
	{
		return null;
	}

	[Token(Token = "0x6002F0E")]
	[Address(RVA = "0x4154840", Offset = "0x4154840", VA = "0x4154840")]
	public void Unload()
	{
	}
}
