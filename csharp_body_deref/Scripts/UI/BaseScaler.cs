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

[Token(Token = "0x20005E2")]
internal abstract class BaseScaler : MonoBehaviour
{
	[Token(Token = "0x6003C25")]
	[Address(RVA = "0x428DF50", Offset = "0x428DF50", VA = "0x428DF50", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003C26")]
	public abstract void ApplyScale();

	[Token(Token = "0x6003C27")]
	[Address(RVA = "0x428DF70", Offset = "0x428DF70", VA = "0x428DF70")]
	protected BaseScaler()
	{
	}
}
