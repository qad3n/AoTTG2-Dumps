// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PathRef
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200053B")]
internal class PathRef
{
	[Token(Token = "0x40011C1")]
	[FieldOffset(Offset = "0x10")]
	private PropertyPath m_Path;

	[Token(Token = "0x17000A2B")]
	public unsafe ref PropertyPath path
	{
		[Token(Token = "0x60027D3")]
		[Address(RVA = "0xB109D0", Offset = "0xB0EFD0", VA = "0x180B109D0")]
		get
		{
			return ref *(PropertyPath*)null;
		}
	}

	[Token(Token = "0x17000A2C")]
	public bool IsEmpty
	{
		[Token(Token = "0x60027D4")]
		[Address(RVA = "0x315D5F0", Offset = "0x315BBF0", VA = "0x18315D5F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60027D5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PathRef()
	{
	}
}
