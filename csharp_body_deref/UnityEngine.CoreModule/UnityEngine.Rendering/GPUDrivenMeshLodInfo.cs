// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUDrivenMeshLodInfo
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000394")]
[UnityEngine.Scripting.UsedByNativeCode]
internal struct GPUDrivenMeshLodInfo
{
	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0x0")]
	public int levelCount;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0x4")]
	public float lodSlope;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0x8")]
	public float lodBias;

	[Token(Token = "0x1700032C")]
	public bool lodSelectionActive
	{
		[Token(Token = "0x60015C0")]
		[Address(RVA = "0x2F65940", Offset = "0x2F63F40", VA = "0x182F65940")]
		get
		{
			return default(bool);
		}
	}
}
