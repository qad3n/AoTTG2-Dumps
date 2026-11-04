// ==================== AoTTG2 cross-reference ====================
// Type: WaterEffect
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/WaterEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200000D")]
public class WaterEffect : MonoBehaviour
{
	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x20")]
	private PostProcessingManager _postProcessingManager;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x28")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x1DB1AC0", Offset = "0x1DB00C0", VA = "0x181DB1AC0")]
	private void Start()
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x1DB18F0", Offset = "0x1DAFEF0", VA = "0x181DB18F0")]
	private bool IsInsideBounds(Vector3 worldPos, BoxCollider bc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x1DB1660", Offset = "0x1DAFC60", VA = "0x181DB1660")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public WaterEffect()
	{
	}
}
