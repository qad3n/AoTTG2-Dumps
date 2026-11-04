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
	[Address(RVA = "0x291A610", Offset = "0x2918C10", VA = "0x18291A610")]
	public static CancellationToken GetCancellationTokenOnDestroy(this MonoBehaviour monoBehaviour)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x291A6C0", Offset = "0x2918CC0", VA = "0x18291A6C0")]
	public static CancellationToken GetCancellationTokenOnDestroy(this GameObject gameObject)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x291A630", Offset = "0x2918C30", VA = "0x18291A630")]
	public static CancellationToken GetCancellationTokenOnDestroy(this Component component)
	{
		return default(CancellationToken);
	}
}
