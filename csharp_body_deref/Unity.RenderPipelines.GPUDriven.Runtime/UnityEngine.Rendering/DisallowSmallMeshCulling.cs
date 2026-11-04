// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DisallowSmallMeshCulling
// Update status: NEW in this game update
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
		[Address(RVA = "0x1991920", Offset = "0x198FF20", VA = "0x181991920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2BC0E50", Offset = "0x2BBF450", VA = "0x182BC0E50")]
		set
		{
		}
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2BC0D70", Offset = "0x2BBF370", VA = "0x182BC0D70")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2BC0CB0", Offset = "0x2BBF2B0", VA = "0x182BC0CB0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2BC0C10", Offset = "0x2BBF210", VA = "0x182BC0C10")]
	private static void AllowSmallMeshCulling(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2BC0930", Offset = "0x2BBEF30", VA = "0x182BC0930")]
	private static void AllowSmallMeshCullingRecursively(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2BC0E30", Offset = "0x2BBF430", VA = "0x182BC0E30")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DisallowSmallMeshCulling()
	{
	}
}
