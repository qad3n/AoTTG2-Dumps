// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BaseScaler.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/Scalers/BaseScaler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20007DF")]
internal abstract class BaseScaler : MonoBehaviour
{
	[Token(Token = "0x6004BFA")]
	[Address(RVA = "0x5BEC6C0", Offset = "0x5BEB6C0", VA = "0x5BEC6C0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6004BFB")]
	public abstract void ApplyScale();

	[Token(Token = "0x6004BFC")]
	[Address(RVA = "0x5BEC6E0", Offset = "0x5BEB6E0", VA = "0x5BEC6E0")]
	protected BaseScaler()
	{
	}
}
