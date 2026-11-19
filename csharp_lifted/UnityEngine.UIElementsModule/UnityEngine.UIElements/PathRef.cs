// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.PathRef
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6B6B620", Offset = "0x6B6A620", VA = "0x6B6B620")]
		get
		{
			return ref *(PropertyPath*)null;
		}
	}

	[Token(Token = "0x17000A2C")]
	public bool IsEmpty
	{
		[Token(Token = "0x60027D4")]
		[Address(RVA = "0x6B6B630", Offset = "0x6B6A630", VA = "0x6B6B630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60027D5")]
	[Address(RVA = "0x6B6B640", Offset = "0x6B6A640", VA = "0x6B6B640")]
	public PathRef()
	{
	}
}
