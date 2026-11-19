// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.IRenderGraphResource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.RenderGraphModule;

[Token(Token = "0x20002A6")]
internal class IRenderGraphResource
{
	[Token(Token = "0x4000BE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public bool imported;

	[Token(Token = "0x4000BE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11")]
	public bool shared;

	[Token(Token = "0x4000BE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12")]
	public bool sharedExplicitRelease;

	[Token(Token = "0x4000BE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13")]
	public bool requestFallBack;

	[Token(Token = "0x4000BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public uint writeCount;

	[Token(Token = "0x4000BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public uint readCount;

	[Token(Token = "0x4000BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public int cachedHash;

	[Token(Token = "0x4000BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public int transientPassIndex;

	[Token(Token = "0x4000BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	public int sharedResourceLastFrameUsed;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x6587410", Offset = "0x6586410", VA = "0x6587410", Slot = "4")]
	public virtual void Reset([Optional] IRenderGraphResourcePool _)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x6587440", Offset = "0x6586440", VA = "0x6587440", Slot = "5")]
	public virtual string GetName()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001304")]
	[Address(RVA = "0x6587470", Offset = "0x6586470", VA = "0x6587470", Slot = "6")]
	public virtual bool IsCreated()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x6587480", Offset = "0x6586480", VA = "0x6587480", Slot = "7")]
	public virtual uint IncrementWriteCount()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001306")]
	[Address(RVA = "0x6587490", Offset = "0x6586490", VA = "0x6587490", Slot = "8")]
	public virtual void IncrementReadCount()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001307")]
	[Address(RVA = "0x65874A0", Offset = "0x65864A0", VA = "0x65874A0", Slot = "9")]
	public virtual bool NeedsFallBack()
	{
		return default(bool);
	}

	[Token(Token = "0x6001308")]
	[Address(RVA = "0x65874C0", Offset = "0x65864C0", VA = "0x65874C0", Slot = "10")]
	public virtual void CreatePooledGraphicsResource(int frameIndex, int executionCount)
	{
	}

	[Token(Token = "0x6001309")]
	[Address(RVA = "0x65874D0", Offset = "0x65864D0", VA = "0x65874D0", Slot = "11")]
	public virtual void CreateGraphicsResource()
	{
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x65874E0", Offset = "0x65864E0", VA = "0x65874E0", Slot = "12")]
	public virtual void UpdateGraphicsResource()
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x65874F0", Offset = "0x65864F0", VA = "0x65874F0", Slot = "13")]
	public virtual void ReleasePooledGraphicsResource(int frameIndex, int executionCount)
	{
	}

	[Token(Token = "0x600130C")]
	[Address(RVA = "0x6587500", Offset = "0x6586500", VA = "0x6587500", Slot = "14")]
	public virtual void ReleaseGraphicsResource()
	{
	}

	[Token(Token = "0x600130D")]
	[Address(RVA = "0x6587510", Offset = "0x6586510", VA = "0x6587510", Slot = "15")]
	public virtual void LogCreation(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600130E")]
	[Address(RVA = "0x6587520", Offset = "0x6586520", VA = "0x6587520", Slot = "16")]
	public virtual void LogRelease(RenderGraphLogger logger)
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x6587530", Offset = "0x6586530", VA = "0x6587530", Slot = "17")]
	public virtual int GetSortIndex()
	{
		return default(int);
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x6587540", Offset = "0x6586540", VA = "0x6587540", Slot = "18")]
	public virtual int GetDescHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x6587550", Offset = "0x6586550", VA = "0x6587550")]
	public IRenderGraphResource()
	{
	}
}
