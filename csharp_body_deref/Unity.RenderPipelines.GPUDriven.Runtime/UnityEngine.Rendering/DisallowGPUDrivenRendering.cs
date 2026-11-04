// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DisallowGPUDrivenRendering
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000007")]
[ExecuteInEditMode]
internal class DisallowGPUDrivenRendering : MonoBehaviour
{
	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x20")]
	private bool m_AppliedRecursively;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x21")]
	[FormerlySerializedAs("applyToChildrenRecursively")]
	public bool m_applyToChildrenRecursively;

	[Token(Token = "0x17000003")]
	public bool applyToChildrenRecursively
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x1991920", Offset = "0x198FF20", VA = "0x181991920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x2BC0900", Offset = "0x2BBEF00", VA = "0x182BC0900")]
		set
		{
		}
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2BC0800", Offset = "0x2BBEE00", VA = "0x182BC0800")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2BC0740", Offset = "0x2BBED40", VA = "0x182BC0740")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2BC06A0", Offset = "0x2BBECA0", VA = "0x182BC06A0")]
	private static void AllowGPUDrivenRendering(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x2BC03C0", Offset = "0x2BBE9C0", VA = "0x182BC03C0")]
	private static void AllowGPUDrivenRenderingRecursively(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x2BC08C0", Offset = "0x2BBEEC0", VA = "0x182BC08C0")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DisallowGPUDrivenRendering()
	{
	}
}
