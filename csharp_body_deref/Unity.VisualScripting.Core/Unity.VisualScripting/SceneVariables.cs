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
		[Address(RVA = "0x2E572A0", Offset = "0x2E558A0", VA = "0x182E572A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x2E57180", Offset = "0x2E55780", VA = "0x182E57180")]
	public static SceneVariables Instance(Scene scene)
	{
		return null;
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x2E571E0", Offset = "0x2E557E0", VA = "0x182E571E0")]
	public static bool InstantiatedIn(Scene scene)
	{
		return default(bool);
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x2E56FE0", Offset = "0x2E555E0", VA = "0x182E56FE0")]
	public static VariableDeclarations For(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001122")]
	[Address(RVA = "0x2E56F80", Offset = "0x2E55580", VA = "0x182E56F80")]
	private void Awake()
	{
	}

	[Token(Token = "0x6001123")]
	[Address(RVA = "0x2E57240", Offset = "0x2E55840", VA = "0x182E57240")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public SceneVariables()
	{
	}
}
