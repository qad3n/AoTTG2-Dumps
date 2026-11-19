// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ObjectParameter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000224")]
[DebuggerDisplay("{m_Value} ({m_OverrideState})")]
public class ObjectParameter<T> : VolumeParameter<T>
{
	[Token(Token = "0x170001FA")]
	internal ReadOnlyCollection<VolumeParameter> parameters
	{
		[Token(Token = "0x6000F6A")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F6B")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public sealed override bool overrideState
	{
		[Token(Token = "0x6000F6C")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F6D")]
		set
		{
		}
	}

	[Token(Token = "0x170001FC")]
	public sealed override T value
	{
		[Token(Token = "0x6000F6E")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000F6F")]
		set
		{
		}
	}

	[Token(Token = "0x6000F70")]
	public ObjectParameter(T value)
	{
	}

	[Token(Token = "0x6000F71")]
	internal override void Interp(VolumeParameter from, VolumeParameter to, float t)
	{
	}
}
