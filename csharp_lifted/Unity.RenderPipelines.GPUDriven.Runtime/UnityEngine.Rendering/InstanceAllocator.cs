// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceAllocator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000074")]
internal struct InstanceAllocator
{
	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x0")]
	private NativeArray<int> m_StructData;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x10")]
	private NativeList<int> m_FreeInstances;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x18")]
	private int m_BaseInstanceOffset;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x1C")]
	private int m_InstanceStride;

	[Token(Token = "0x17000038")]
	public int length
	{
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x65D3960", Offset = "0x65D2960", VA = "0x65D3960")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x65D3970", Offset = "0x65D2970", VA = "0x65D3970")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool valid
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x65D3980", Offset = "0x65D2980", VA = "0x65D3980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x65D39B0", Offset = "0x65D29B0", VA = "0x65D39B0")]
	public void Initialize(int baseInstanceOffset = 0, int instanceStride = 1)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x65D3A60", Offset = "0x65D2A60", VA = "0x65D3A60")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x65D3AC0", Offset = "0x65D2AC0", VA = "0x65D3AC0")]
	public int AllocateInstance()
	{
		return default(int);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x65D3BD0", Offset = "0x65D2BD0", VA = "0x65D3BD0")]
	public void FreeInstance(int instance)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x65D3C20", Offset = "0x65D2C20", VA = "0x65D3C20")]
	public int GetNumAllocated()
	{
		return default(int);
	}
}
