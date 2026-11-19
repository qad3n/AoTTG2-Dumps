// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.UniTaskCancellationExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000072")]
public static class UniTaskCancellationExtensions
{
	[Token(Token = "0x6000197")]
	[Address(RVA = "0x62CA280", Offset = "0x62C9280", VA = "0x62CA280")]
	public static CancellationToken GetCancellationTokenOnDestroy(this MonoBehaviour monoBehaviour)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x62CA2A0", Offset = "0x62C92A0", VA = "0x62CA2A0")]
	public static CancellationToken GetCancellationTokenOnDestroy(this GameObject gameObject)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x62CA2C0", Offset = "0x62C92C0", VA = "0x62CA2C0")]
	public static CancellationToken GetCancellationTokenOnDestroy(this Component component)
	{
		return default(CancellationToken);
	}
}
