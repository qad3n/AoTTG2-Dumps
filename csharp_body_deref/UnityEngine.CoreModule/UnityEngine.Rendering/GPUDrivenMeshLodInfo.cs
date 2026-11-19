// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenMeshLodInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20003D0")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GPUDrivenMeshLodInfo
{
	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x0")]
	public int levelCount;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x4")]
	public float lodSlope;

	[Token(Token = "0x4000C61")]
	[FieldOffset(Offset = "0x8")]
	public float lodBias;

	[Token(Token = "0x170003BE")]
	public bool lodSelectionActive
	{
		[Token(Token = "0x6001776")]
		[Address(RVA = "0x6968000", Offset = "0x6967000", VA = "0x6968000")]
		get
		{
			return default(bool);
		}
	}
}
