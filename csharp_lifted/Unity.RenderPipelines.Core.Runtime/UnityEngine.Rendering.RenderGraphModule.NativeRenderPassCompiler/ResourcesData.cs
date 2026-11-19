// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.ResourcesData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler;

[Token(Token = "0x20002CC")]
internal class ResourcesData
{
	[Token(Token = "0x4000D14")]
	[FieldOffset(Offset = "0x10")]
	public NativeList<ResourceUnversionedData>[] unversionedData;

	[Token(Token = "0x4000D15")]
	[FieldOffset(Offset = "0x18")]
	public NativeList<ResourceVersionedData>[] versionedData;

	[Token(Token = "0x4000D16")]
	[FieldOffset(Offset = "0x20")]
	public NativeList<ResourceReaderData>[] readerData;

	[Token(Token = "0x4000D17")]
	[FieldOffset(Offset = "0x28")]
	public int[] MaxVersions;

	[Token(Token = "0x4000D18")]
	[FieldOffset(Offset = "0x30")]
	public int[] MaxReaders;

	[Token(Token = "0x4000D19")]
	[FieldOffset(Offset = "0x38")]
	public DynamicArray<Name>[] resourceNames;

	[Token(Token = "0x1700026B")]
	public unsafe ref ResourceVersionedData this[ResourceHandle h]
	{
		[Token(Token = "0x60013D3")]
		[Address(RVA = "0x659DAA0", Offset = "0x659CAA0", VA = "0x659DAA0")]
		get
		{
			return ref *(ResourceVersionedData*)null;
		}
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x65A1B30", Offset = "0x65A0B30", VA = "0x65A1B30")]
	public ResourcesData()
	{
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x65A1DD0", Offset = "0x65A0DD0", VA = "0x65A1DD0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60013CF")]
	private void AllocateAndResizeNativeListIfNeeded<T>(ref NativeList<T> nativeList, int size, NativeArrayOptions options) where T : struct
	{
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x65A2080", Offset = "0x65A1080", VA = "0x65A2080")]
	public void Initialize(RenderGraphResourceRegistry resources)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x65A2940", Offset = "0x65A1940", VA = "0x65A2940")]
	public int Index(in ResourceHandle h)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x65A2A30", Offset = "0x65A1A30", VA = "0x65A2A30")]
	public int IndexReader(in ResourceHandle h, int readerID)
	{
		return default(int);
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x65A2BA0", Offset = "0x65A1BA0", VA = "0x65A2BA0")]
	public void Dispose()
	{
	}
}
