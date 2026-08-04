// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessVolume
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000079")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Post-process Volume", 1001)]
public sealed class PostProcessVolume : MonoBehaviour
{
	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x20")]
	public PostProcessProfile sharedProfile;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Check this box to mark this volume as global. This volume's Profile will be applied to the whole Scene.")]
	public bool isGlobal;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x2C")]
	[Min(0f)]
	[Tooltip("The distance (from the attached Collider) to start blending from. A value of 0 means there will be no blending and the Volume overrides will be applied immediatly upon entry to the attached Collider.")]
	public float blendDistance;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x30")]
	[Range(0f, 1f)]
	[Tooltip("The total weight of this Volume in the Scene. A value of 0 signifies that it will have no effect, 1 signifies full effect.")]
	public float weight;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x34")]
	[Tooltip("The volume priority in the stack. A higher value means higher priority. Negative values are supported.")]
	public float priority;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x38")]
	private int m_PreviousLayer;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x3C")]
	private float m_PreviousPriority;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x40")]
	private List<Collider> m_TempColliders;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x48")]
	private PostProcessProfile m_InternalProfile;

	[Token(Token = "0x17000024")]
	public PostProcessProfile profile
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x4B5CB40", Offset = "0x4B5CB40", VA = "0x4B5CB40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x4B5EAD0", Offset = "0x4B5EAD0", VA = "0x4B5EAD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	internal PostProcessProfile profileRef
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x4B5C710", Offset = "0x4B5C710", VA = "0x4B5C710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000026")]
	internal int previousLayer
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x4B5EB30", Offset = "0x4B5EB30", VA = "0x4B5EB30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4B5EAE0", Offset = "0x4B5EAE0", VA = "0x4B5EAE0")]
	public bool HasInstantiatedProfile()
	{
		return default(bool);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4B5EB40", Offset = "0x4B5EB40", VA = "0x4B5EB40")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4B5EC80", Offset = "0x4B5EC80", VA = "0x4B5EC80")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4B5ED50", Offset = "0x4B5ED50", VA = "0x4B5ED50")]
	private void Update()
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4B5EED0", Offset = "0x4B5EED0", VA = "0x4B5EED0")]
	private void OnDrawGizmos()
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4B5F870", Offset = "0x4B5F870", VA = "0x4B5F870")]
	public PostProcessVolume()
	{
	}
}
