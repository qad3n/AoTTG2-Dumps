// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.InstanceCullingBatcherDesc
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000053")]
internal struct InstanceCullingBatcherDesc
{
	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x0")]
	public OnCullingCompleteCallback onCompleteCallback;

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2BDF280", Offset = "0x2BDD880", VA = "0x182BDF280")]
	public static InstanceCullingBatcherDesc NewDefault()
	{
		return default(InstanceCullingBatcherDesc);
	}
}
