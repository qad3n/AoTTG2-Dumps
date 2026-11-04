// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002B4")]
internal class CompilerContextData : IDisposable, RenderGraph.ICompiledGraph
{
	[Token(Token = "0x20002B5")]
	public ref struct PassIterator
	{
		[Token(Token = "0x4000C4C")]
		[FieldOffset(Offset = "0x0")]
		private readonly CompilerContextData m_Ctx;

		[Token(Token = "0x4000C4D")]
		[FieldOffset(Offset = "0x8")]
		private int m_Index;

		[Token(Token = "0x17000265")]
		public unsafe ref readonly PassData Current
		{
			[Token(Token = "0x6001357")]
			[Address(RVA = "0x2B97510", Offset = "0x2B95B10", VA = "0x182B97510")]
			get
			{
				return ref *(PassData*)null;
			}
		}

		[Token(Token = "0x6001356")]
		[Address(RVA = "0x2B97440", Offset = "0x2B95A40", VA = "0x182B97440")]
		public PassIterator(CompilerContextData ctx)
		{
		}

		[Token(Token = "0x6001358")]
		[Address(RVA = "0x2B974A0", Offset = "0x2B95AA0", VA = "0x182B974A0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001359")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		public PassIterator GetEnumerator()
		{
			return default(PassIterator);
		}
	}

	[Token(Token = "0x20002B6")]
	public ref struct NativePassIterator
	{
		[Token(Token = "0x4000C4E")]
		[FieldOffset(Offset = "0x0")]
		private readonly CompilerContextData m_Ctx;

		[Token(Token = "0x4000C4F")]
		[FieldOffset(Offset = "0x8")]
		private int m_Index;

		[Token(Token = "0x17000266")]
		public unsafe ref readonly NativePassData Current
		{
			[Token(Token = "0x600135B")]
			[Address(RVA = "0x2B97450", Offset = "0x2B95A50", VA = "0x182B97450")]
			get
			{
				return ref *(NativePassData*)null;
			}
		}

		[Token(Token = "0x600135A")]
		[Address(RVA = "0x2B97440", Offset = "0x2B95A40", VA = "0x182B97440")]
		public NativePassIterator(CompilerContextData ctx)
		{
		}

		[Token(Token = "0x600135C")]
		[Address(RVA = "0x2B97380", Offset = "0x2B95980", VA = "0x182B97380")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600135D")]
		[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
		public NativePassIterator GetEnumerator()
		{
			return default(NativePassIterator);
		}
	}

	[Token(Token = "0x4000C3E")]
	[FieldOffset(Offset = "0x10")]
	public ResourcesData resources;

	[Token(Token = "0x4000C3F")]
	[FieldOffset(Offset = "0x18")]
	public NativeList<PassData> passData;

	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<int, GraphicsFence> fences;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x28")]
	public DynamicArray<Name> passNames;

	[Token(Token = "0x4000C42")]
	[FieldOffset(Offset = "0x30")]
	public NativeList<PassInputData> inputData;

	[Token(Token = "0x4000C43")]
	[FieldOffset(Offset = "0x38")]
	public NativeList<PassOutputData> outputData;

	[Token(Token = "0x4000C44")]
	[FieldOffset(Offset = "0x40")]
	public NativeList<PassFragmentData> fragmentData;

	[Token(Token = "0x4000C45")]
	[FieldOffset(Offset = "0x48")]
	public NativeList<ResourceHandle> sampledData;

	[Token(Token = "0x4000C46")]
	[FieldOffset(Offset = "0x50")]
	public NativeList<ResourceHandle> createData;

	[Token(Token = "0x4000C47")]
	[FieldOffset(Offset = "0x58")]
	public NativeList<ResourceHandle> destroyData;

	[Token(Token = "0x4000C48")]
	[FieldOffset(Offset = "0x60")]
	public NativeList<PassRandomWriteData> randomAccessResourceData;

	[Token(Token = "0x4000C49")]
	[FieldOffset(Offset = "0x68")]
	public NativeList<NativePassData> nativePassData;

	[Token(Token = "0x4000C4A")]
	[FieldOffset(Offset = "0x70")]
	public NativeList<SubPassDescriptor> nativeSubPassData;

	[Token(Token = "0x4000C4B")]
	[FieldOffset(Offset = "0x78")]
	private bool m_AreNativeListsAllocated;

	[Token(Token = "0x17000263")]
	public PassIterator Passes
	{
		[Token(Token = "0x600134F")]
		[Address(RVA = "0x2B8AA30", Offset = "0x2B89030", VA = "0x182B8AA30")]
		get
		{
			return default(PassIterator);
		}
	}

	[Token(Token = "0x17000264")]
	public NativePassIterator NativePasses
	{
		[Token(Token = "0x6001351")]
		[Address(RVA = "0x2B8AA30", Offset = "0x2B89030", VA = "0x182B8AA30")]
		get
		{
			return default(NativePassIterator);
		}
	}

	[Token(Token = "0x600133E")]
	[Address(RVA = "0x2B8A930", Offset = "0x2B88F30", VA = "0x182B8A930")]
	public CompilerContextData()
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x2B891A0", Offset = "0x2B877A0", VA = "0x182B891A0")]
	private void AllocateNativeDataStructuresIfNeeded(int estimatedNumPasses)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x2B8A100", Offset = "0x2B88700", VA = "0x182B8A100")]
	public void Initialize(RenderGraphResourceRegistry resourceRegistry, int estimatedNumPasses)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x2B895B0", Offset = "0x2B87BB0", VA = "0x182B895B0", Slot = "5")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001342")]
	[Address(RVA = "0x2B8A860", Offset = "0x2B88E60", VA = "0x182B8A860")]
	public unsafe ref ResourceUnversionedData UnversionedResourceData(in ResourceHandle h)
	{
		return ref *(ResourceUnversionedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001343")]
	[Address(RVA = "0x2B86830", Offset = "0x2B84E30", VA = "0x182B86830")]
	public unsafe ref ResourceVersionedData VersionedResourceData(in ResourceHandle h)
	{
		return ref *(ResourceVersionedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001344")]
	[Address(RVA = "0x2B8A190", Offset = "0x2B88790", VA = "0x182B8A190")]
	public ReadOnlySpan<ResourceReaderData> Readers(in ResourceHandle h)
	{
		return default(ReadOnlySpan<ResourceReaderData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001345")]
	[Address(RVA = "0x2B8A310", Offset = "0x2B88910", VA = "0x182B8A310")]
	public unsafe ref ResourceReaderData ResourceReader(in ResourceHandle h, int i)
	{
		return ref *(ResourceReaderData*)null;
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x2B8A4D0", Offset = "0x2B88AD0", VA = "0x182B8A4D0")]
	public bool TryAddToFragmentList(in TextureAccess access, int listFirstIndex, int numItems, out string errorMessage)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001347")]
	[Address(RVA = "0x2B898A0", Offset = "0x2B87EA0", VA = "0x182B898A0")]
	public Name GetFullPassName(int passId)
	{
		return default(Name);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001348")]
	[Address(RVA = "0x2B89C60", Offset = "0x2B88260", VA = "0x182B89C60")]
	public string GetPassName(int passId)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001349")]
	[Address(RVA = "0x2B89F10", Offset = "0x2B88510", VA = "0x182B89F10")]
	public string GetResourceName(in ResourceHandle h)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134A")]
	[Address(RVA = "0x2B89FE0", Offset = "0x2B885E0", VA = "0x182B89FE0")]
	public string GetResourceVersionedName(in ResourceHandle h)
	{
		return null;
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x2B8A610", Offset = "0x2B88C10", VA = "0x182B8A610")]
	public bool TryAddToRandomAccessResourceList(in ResourceHandle h, int randomWriteSlotIndex, bool preserveCounterValue, int listFirstIndex, int numItems, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x2B8A440", Offset = "0x2B88A40", VA = "0x182B8A440")]
	public void TagAllPasses(int value)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x2B89750", Offset = "0x2B87D50", VA = "0x182B89750")]
	public void CullAllPasses(bool isCulled)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x2B8A080", Offset = "0x2B88680", VA = "0x182B8A080")]
	public TextureUVOrigin GetTextureUVOrigin(in TextureHandle targetHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x2B89CC0", Offset = "0x2B882C0", VA = "0x182B89CC0")]
	internal List<PassData> GetPasses()
	{
		return null;
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x2B89910", Offset = "0x2B87F10", VA = "0x182B89910")]
	internal List<NativePassData> GetNativePasses()
	{
		return null;
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x2B89840", Offset = "0x2B87E40", VA = "0x182B89840", Slot = "1")]
	~CompilerContextData()
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x2B897E0", Offset = "0x2B87DE0", VA = "0x182B897E0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x2B89460", Offset = "0x2B87A60", VA = "0x182B89460")]
	private void Cleanup()
	{
	}
}
