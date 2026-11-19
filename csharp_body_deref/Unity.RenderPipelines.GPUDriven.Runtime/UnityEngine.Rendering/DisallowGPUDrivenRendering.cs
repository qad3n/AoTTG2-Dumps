// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DisallowGPUDrivenRendering
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65B0830", Offset = "0x65AF830", VA = "0x65B0830")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x65B0840", Offset = "0x65AF840", VA = "0x65B0840")]
		set
		{
		}
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x65B08D0", Offset = "0x65AF8D0", VA = "0x65B08D0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x65B08A0", Offset = "0x65AF8A0", VA = "0x65B08A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x65B0C60", Offset = "0x65AFC60", VA = "0x65B0C60")]
	private static void AllowGPUDrivenRendering(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x65B0900", Offset = "0x65AF900", VA = "0x65B0900")]
	private static void AllowGPUDrivenRenderingRecursively(Transform transform, bool allow)
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x65B0D00", Offset = "0x65AFD00", VA = "0x65B0D00")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x65B0D70", Offset = "0x65AFD70", VA = "0x65B0D70")]
	public DisallowGPUDrivenRendering()
	{
	}
}
