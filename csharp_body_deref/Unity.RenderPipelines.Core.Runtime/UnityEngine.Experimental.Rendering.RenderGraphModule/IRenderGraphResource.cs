// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x2000059")]
internal class IRenderGraphResource
{
	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x10")]
	public bool imported;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x11")]
	public bool shared;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x12")]
	public bool sharedExplicitRelease;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x13")]
	public bool requestFallBack;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x14")]
	public bool forceRelease;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x18")]
	public uint writeCount;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x1C")]
	public int cachedHash;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x20")]
	public int transientPassIndex;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x24")]
	public int sharedResourceLastFrameUsed;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x28")]
	public int version;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x30")]
	protected IRenderGraphResourcePool m_Pool;

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x4B92F00", Offset = "0x4B92F00", VA = "0x4B92F00", Slot = "4")]
	public virtual void Reset(IRenderGraphResourcePool pool)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4B92F30", Offset = "0x4B92F30", VA = "0x4B92F30", Slot = "5")]
	public virtual string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x4B92F60", Offset = "0x4B92F60", VA = "0x4B92F60", Slot = "6")]
	public virtual bool IsCreated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000517")]
	[Address(RVA = "0x4B92F70", Offset = "0x4B92F70", VA = "0x4B92F70", Slot = "7")]
	public virtual void IncrementWriteCount()
	{
	}

	[Token(Token = "0x6000518")]
	[Address(RVA = "0x4B92F80", Offset = "0x4B92F80", VA = "0x4B92F80", Slot = "8")]
	public virtual int NewVersion()
	{
		return default(int);
	}

	[Token(Token = "0x6000519")]
	[Address(RVA = "0x4B92F90", Offset = "0x4B92F90", VA = "0x4B92F90", Slot = "9")]
	public virtual bool NeedsFallBack()
	{
		return default(bool);
	}

	[Token(Token = "0x600051A")]
	[Address(RVA = "0x4B92FB0", Offset = "0x4B92FB0", VA = "0x4B92FB0", Slot = "10")]
	public virtual void CreatePooledGraphicsResource()
	{
	}

	[Token(Token = "0x600051B")]
	[Address(RVA = "0x4B92FC0", Offset = "0x4B92FC0", VA = "0x4B92FC0", Slot = "11")]
	public virtual void CreateGraphicsResource(string name = "")
	{
	}

	[Token(Token = "0x600051C")]
	[Address(RVA = "0x4B92FD0", Offset = "0x4B92FD0", VA = "0x4B92FD0", Slot = "12")]
	public virtual void ReleasePooledGraphicsResource(int frameIndex)
	{
	}

	[Token(Token = "0x600051D")]
	[Address(RVA = "0x4B92FE0", Offset = "0x4B92FE0", VA = "0x4B92FE0", Slot = "13")]
	public virtual void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x600051E")]
	[Address(RVA = "0x4B92FF0", Offset = "0x4B92FF0", VA = "0x4B92FF0", Slot = "14")]
	public virtual void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600051F")]
	[Address(RVA = "0x4B93000", Offset = "0x4B93000", VA = "0x4B93000", Slot = "15")]
	public virtual void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x6000520")]
	[Address(RVA = "0x4B93010", Offset = "0x4B93010", VA = "0x4B93010", Slot = "16")]
	public virtual int GetSortIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6000521")]
	[Address(RVA = "0x4B93020", Offset = "0x4B93020", VA = "0x4B93020")]
	public IRenderGraphResource()
	{
	}
}
