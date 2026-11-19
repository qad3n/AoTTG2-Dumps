// ==================== AoTTG2 cross-reference ====================
// Type: WaterEffect
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/WaterEffect.c
// Prior real C# source (older reference): Assets/Scripts/Effects/WaterEffect.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200000D")]
public class WaterEffect : MonoBehaviour
{
	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x20")]
	private PostProcessingManager _postProcessingManager;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x28")]
	private BoxCollider _boxCollider;

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5745DA0", Offset = "0x5744DA0", VA = "0x5745DA0")]
	private void Start()
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5745EF0", Offset = "0x5744EF0", VA = "0x5745EF0")]
	private bool IsInsideBounds(Vector3 worldPos, BoxCollider bc)
	{
		return default(bool);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5746080", Offset = "0x5745080", VA = "0x5746080")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5746140", Offset = "0x5745140", VA = "0x5746140")]
	public WaterEffect()
	{
	}
}
