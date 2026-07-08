using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering.RenderGraphModule;

[Token(Token = "0x200005F")]
internal class IRenderGraphResource
{
	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x10")]
	public bool imported;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x11")]
	public bool shared;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x12")]
	public bool sharedExplicitRelease;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x13")]
	public bool requestFallBack;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x14")]
	public bool forceRelease;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x18")]
	public uint writeCount;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x1C")]
	public int cachedHash;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x20")]
	public int transientPassIndex;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x24")]
	public int sharedResourceLastFrameUsed;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x28")]
	public int version;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x30")]
	protected IRenderGraphResourcePool m_Pool;

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x486F580", Offset = "0x486F580", VA = "0x486F580", Slot = "4")]
	public virtual void Reset(IRenderGraphResourcePool pool)
	{
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x486F5B0", Offset = "0x486F5B0", VA = "0x486F5B0", Slot = "5")]
	public virtual string GetName()
	{
		return null;
	}

	[Token(Token = "0x6000534")]
	[Address(RVA = "0x486F5E0", Offset = "0x486F5E0", VA = "0x486F5E0", Slot = "6")]
	public virtual bool IsCreated()
	{
		return default(bool);
	}

	[Token(Token = "0x6000535")]
	[Address(RVA = "0x486F5F0", Offset = "0x486F5F0", VA = "0x486F5F0", Slot = "7")]
	public virtual void IncrementWriteCount()
	{
	}

	[Token(Token = "0x6000536")]
	[Address(RVA = "0x486F600", Offset = "0x486F600", VA = "0x486F600", Slot = "8")]
	public virtual int NewVersion()
	{
		return default(int);
	}

	[Token(Token = "0x6000537")]
	[Address(RVA = "0x486F610", Offset = "0x486F610", VA = "0x486F610", Slot = "9")]
	public virtual bool NeedsFallBack()
	{
		return default(bool);
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x486F630", Offset = "0x486F630", VA = "0x486F630", Slot = "10")]
	public virtual void CreatePooledGraphicsResource()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x486F640", Offset = "0x486F640", VA = "0x486F640", Slot = "11")]
	public virtual void CreateGraphicsResource(string name = "")
	{
	}

	[Token(Token = "0x600053A")]
	[Address(RVA = "0x486F650", Offset = "0x486F650", VA = "0x486F650", Slot = "12")]
	public virtual void ReleasePooledGraphicsResource(int frameIndex)
	{
	}

	[Token(Token = "0x600053B")]
	[Address(RVA = "0x486F660", Offset = "0x486F660", VA = "0x486F660", Slot = "13")]
	public virtual void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x486F670", Offset = "0x486F670", VA = "0x486F670", Slot = "14")]
	public virtual void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x486F680", Offset = "0x486F680", VA = "0x486F680", Slot = "15")]
	public virtual void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x486F690", Offset = "0x486F690", VA = "0x486F690", Slot = "16")]
	public virtual int GetSortIndex()
	{
		return default(int);
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x486F6A0", Offset = "0x486F6A0", VA = "0x486F6A0")]
	public IRenderGraphResource()
	{
	}
}
