using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000074")]
public static class UniTaskCancellationExtensions
{
	[Token(Token = "0x6000199")]
	[Address(RVA = "0x46B5730", Offset = "0x46B5730", VA = "0x46B5730")]
	public static CancellationToken GetCancellationTokenOnDestroy(this MonoBehaviour monoBehaviour)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x46B5750", Offset = "0x46B5750", VA = "0x46B5750")]
	public static CancellationToken GetCancellationTokenOnDestroy(this GameObject gameObject)
	{
		return default(CancellationToken);
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x46B5770", Offset = "0x46B5770", VA = "0x46B5770")]
	public static CancellationToken GetCancellationTokenOnDestroy(this Component component)
	{
		return default(CancellationToken);
	}
}
