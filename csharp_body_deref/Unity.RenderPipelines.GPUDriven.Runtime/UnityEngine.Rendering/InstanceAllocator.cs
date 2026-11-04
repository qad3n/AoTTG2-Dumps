// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceAllocator
// Update status: NEW in this game update
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
		[Address(RVA = "0x2BD6E40", Offset = "0x2BD5440", VA = "0x182BD6E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000202")]
		[Address(RVA = "0x29BDFA0", Offset = "0x29BC5A0", VA = "0x1829BDFA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public bool valid
	{
		[Token(Token = "0x6000203")]
		[Address(RVA = "0x2BDD5E0", Offset = "0x2BDBBE0", VA = "0x182BDD5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x2BDD520", Offset = "0x2BDBB20", VA = "0x182BDD520")]
	public void Initialize(int baseInstanceOffset = 0, int instanceStride = 1)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x2BDD410", Offset = "0x2BDBA10", VA = "0x182BDD410")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x2BDD300", Offset = "0x2BDB900", VA = "0x182BDD300")]
	public int AllocateInstance()
	{
		return default(int);
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x2BDD470", Offset = "0x2BDBA70", VA = "0x182BDD470")]
	public void FreeInstance(int instance)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x2BDD4C0", Offset = "0x2BDBAC0", VA = "0x182BDD4C0")]
	public int GetNumAllocated()
	{
		return default(int);
	}
}
