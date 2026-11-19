// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x658CBA0", Offset = "0x658BBA0", VA = "0x658CBA0")]
			get
			{
				return ref *(PassData*)null;
			}
		}

		[Token(Token = "0x6001356")]
		[Address(RVA = "0x658C920", Offset = "0x658B920", VA = "0x658C920")]
		public PassIterator(CompilerContextData ctx)
		{
		}

		[Token(Token = "0x6001358")]
		[Address(RVA = "0x658CBF0", Offset = "0x658BBF0", VA = "0x658CBF0")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001359")]
		[Address(RVA = "0x658CB90", Offset = "0x658BB90", VA = "0x658CB90")]
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
			[Address(RVA = "0x658CEC0", Offset = "0x658BEC0", VA = "0x658CEC0")]
			get
			{
				return ref *(NativePassData*)null;
			}
		}

		[Token(Token = "0x600135A")]
		[Address(RVA = "0x658CC70", Offset = "0x658BC70", VA = "0x658CC70")]
		public NativePassIterator(CompilerContextData ctx)
		{
		}

		[Token(Token = "0x600135C")]
		[Address(RVA = "0x658CF10", Offset = "0x658BF10", VA = "0x658CF10")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600135D")]
		[Address(RVA = "0x658CEB0", Offset = "0x658BEB0", VA = "0x658CEB0")]
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
		[Address(RVA = "0x658C910", Offset = "0x658B910", VA = "0x658C910")]
		get
		{
			return default(PassIterator);
		}
	}

	[Token(Token = "0x17000264")]
	public NativePassIterator NativePasses
	{
		[Token(Token = "0x6001351")]
		[Address(RVA = "0x658CC60", Offset = "0x658BC60", VA = "0x658CC60")]
		get
		{
			return default(NativePassIterator);
		}
	}

	[Token(Token = "0x600133E")]
	[Address(RVA = "0x658B6F0", Offset = "0x658A6F0", VA = "0x658B6F0")]
	public CompilerContextData()
	{
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x658B7F0", Offset = "0x658A7F0", VA = "0x658B7F0")]
	private void AllocateNativeDataStructuresIfNeeded(int estimatedNumPasses)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x658BAD0", Offset = "0x658AAD0", VA = "0x658BAD0")]
	public void Initialize(RenderGraphResourceRegistry resourceRegistry, int estimatedNumPasses)
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x658BB40", Offset = "0x658AB40", VA = "0x658BB40", Slot = "5")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001342")]
	[Address(RVA = "0x658BCF0", Offset = "0x658ACF0", VA = "0x658BCF0")]
	public unsafe ref ResourceUnversionedData UnversionedResourceData(in ResourceHandle h)
	{
		return ref *(ResourceUnversionedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001343")]
	[Address(RVA = "0x658BDD0", Offset = "0x658ADD0", VA = "0x658BDD0")]
	public unsafe ref ResourceVersionedData VersionedResourceData(in ResourceHandle h)
	{
		return ref *(ResourceVersionedData*)null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001344")]
	[Address(RVA = "0x658BDF0", Offset = "0x658ADF0", VA = "0x658BDF0")]
	public ReadOnlySpan<ResourceReaderData> Readers(in ResourceHandle h)
	{
		return default(ReadOnlySpan<ResourceReaderData>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001345")]
	[Address(RVA = "0x658BF60", Offset = "0x658AF60", VA = "0x658BF60")]
	public unsafe ref ResourceReaderData ResourceReader(in ResourceHandle h, int i)
	{
		return ref *(ResourceReaderData*)null;
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x658C090", Offset = "0x658B090", VA = "0x658C090")]
	public bool TryAddToFragmentList(in TextureAccess access, int listFirstIndex, int numItems, out string errorMessage)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001347")]
	[Address(RVA = "0x658C1E0", Offset = "0x658B1E0", VA = "0x658C1E0")]
	public Name GetFullPassName(int passId)
	{
		return default(Name);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001348")]
	[Address(RVA = "0x658C240", Offset = "0x658B240", VA = "0x658C240")]
	public string GetPassName(int passId)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001349")]
	[Address(RVA = "0x658C290", Offset = "0x658B290", VA = "0x658C290")]
	public string GetResourceName(in ResourceHandle h)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600134A")]
	[Address(RVA = "0x658C380", Offset = "0x658B380", VA = "0x658C380")]
	public string GetResourceVersionedName(in ResourceHandle h)
	{
		return null;
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x658C410", Offset = "0x658B410", VA = "0x658C410")]
	public bool TryAddToRandomAccessResourceList(in ResourceHandle h, int randomWriteSlotIndex, bool preserveCounterValue, int listFirstIndex, int numItems, out string errorMessage)
	{
		return default(bool);
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x658C6C0", Offset = "0x658B6C0", VA = "0x658C6C0")]
	public void TagAllPasses(int value)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x658C760", Offset = "0x658B760", VA = "0x658C760")]
	public void CullAllPasses(bool isCulled)
	{
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x658C800", Offset = "0x658B800", VA = "0x658C800")]
	public TextureUVOrigin GetTextureUVOrigin(in TextureHandle targetHandle)
	{
		return default(TextureUVOrigin);
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x658C930", Offset = "0x658B930", VA = "0x658C930")]
	internal List<PassData> GetPasses()
	{
		return null;
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x658CC80", Offset = "0x658BC80", VA = "0x658CC80")]
	internal List<NativePassData> GetNativePasses()
	{
		return null;
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x658CFD0", Offset = "0x658BFD0", VA = "0x658CFD0", Slot = "1")]
	~CompilerContextData()
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x658D1C0", Offset = "0x658C1C0", VA = "0x658D1C0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001355")]
	[Address(RVA = "0x658D060", Offset = "0x658C060", VA = "0x658D060")]
	private void Cleanup()
	{
	}
}
