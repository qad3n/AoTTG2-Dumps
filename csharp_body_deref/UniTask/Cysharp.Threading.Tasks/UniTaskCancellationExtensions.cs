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

[Token(Token = "0x2000074")]
public static class UniTaskCancellationExtensions
{
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x49DA830", Offset = "0x49DA830", VA = "0x49DA830")]
	public static CancellationToken GetCancellationTokenOnDestroy(this MonoBehaviour monoBehaviour)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x49DA850", Offset = "0x49DA850", VA = "0x49DA850")]
	public static CancellationToken GetCancellationTokenOnDestroy(this GameObject gameObject)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x49DA870", Offset = "0x49DA870", VA = "0x49DA870")]
	public static CancellationToken GetCancellationTokenOnDestroy(this Component component)
	{
		return default(CancellationToken);
	}
}
