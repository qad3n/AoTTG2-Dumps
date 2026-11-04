// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Serialization.FormerlySerializedAsAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Serialization;

[Token(Token = "0x2000237")]
[UnityEngine.Scripting.RequiredByNativeCode]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = true, Inherited = false)]
public class FormerlySerializedAsAttribute : Attribute
{
	[Token(Token = "0x4000737")]
	[FieldOffset(Offset = "0x10")]
	private string m_oldName;

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public FormerlySerializedAsAttribute(string oldName)
	{
	}
}
