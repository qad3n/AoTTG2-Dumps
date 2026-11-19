// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DisallowSmallMeshCulling
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000008")]
[ExecuteInEditMode]
internal class DisallowSmallMeshCulling : MonoBehaviour
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x20")]
	private bool m_AppliedRecursively;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x21")]
	public bool m_applyToChildrenRecursively;

	[Token(Token = "0x17000004")]
	public bool applyToChildrenRecursively
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x65B0D80", Offset = "0x65AFD80", VA = "0x65B0D80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x65B0D90", Offset = "0x65AFD90", VA = "0x65B0D90")]
		set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x65B0E20", Offset = "0x65AFE20", VA = "0x65B0E20")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x65B0DF0", Offset = "0x65AFDF0", VA = "0x65B0DF0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x65B11B0", Offset = "0x65B01B0", VA = "0x65B11B0")]
	private static void AllowSmallMeshCulling(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x65B0E50", Offset = "0x65AFE50", VA = "0x65B0E50")]
	private static void AllowSmallMeshCullingRecursively(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x65B1250", Offset = "0x65B0250", VA = "0x65B1250")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x65B12B0", Offset = "0x65B02B0", VA = "0x65B12B0")]
	public DisallowSmallMeshCulling()
	{
	}
}
