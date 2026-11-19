// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.SceneVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D1")]
[Singleton(Name = "VisualScripting SceneVariables", Automatic = true, Persistent = false)]
[RequireComponent(typeof(Variables))]
[DisableAnnotation]
[AddComponentMenu("")]
[IncludeInSettings(false)]
public sealed class SceneVariables : MonoBehaviour, ISingleton
{
	[Token(Token = "0x4000943")]
	[FieldOffset(Offset = "0x20")]
	private Variables _variables;

	[Token(Token = "0x170001EA")]
	public Variables variables
	{
		[Token(Token = "0x6001124")]
		[Address(RVA = "0x68506C0", Offset = "0x684F6C0", VA = "0x68506C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x68504E0", Offset = "0x684F4E0", VA = "0x68504E0")]
	public static SceneVariables Instance(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x6850540", Offset = "0x684F540", VA = "0x6850540")]
	public static bool InstantiatedIn(Scene scene)
	{
		return default(bool);
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x68505A0", Offset = "0x684F5A0", VA = "0x68505A0")]
	public static VariableDeclarations For(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x6850760", Offset = "0x684F760", VA = "0x6850760")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x68507C0", Offset = "0x684F7C0", VA = "0x68507C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x6850820", Offset = "0x684F820", VA = "0x6850820")]
	public SceneVariables()
	{
	}
}
