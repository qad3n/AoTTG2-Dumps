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

[Token(Token = "0x2000737")]
internal abstract class BaseScaler : MonoBehaviour
{
	[Token(Token = "0x60046DA")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x60046DB")]
	public abstract void ApplyScale();

	[Token(Token = "0x60046DC")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected BaseScaler()
	{
	}
}
