// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.GeneratorInstance
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.IntegerTime;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Audio;

[Token(Token = "0x200001A")]
public struct GeneratorInstance : IEquatable<GeneratorInstance>
{
	[Token(Token = "0x200001B")]
	public interface ICapabilities
	{
		[Token(Token = "0x1700001C")]
		bool isFinite
		{
			[Token(Token = "0x6000089")]
			get;
		}

		[Token(Token = "0x1700001D")]
		bool isRealtime
		{
			[Token(Token = "0x600008A")]
			get;
		}

		[Token(Token = "0x1700001E")]
		DiscreteTime? length
		{
			[Token(Token = "0x600008B")]
			get;
		}
	}

	[Token(Token = "0x200001C")]
	public readonly struct Setup
	{
		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x0")]
		public readonly AudioSpeakerMode speakerMode;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x4")]
		public readonly int sampleRate;
	}

	[Token(Token = "0x200001D")]
	public struct Properties
	{
		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x0")]
		private byte m_Reserved;
	}

	[Token(Token = "0x200001E")]
	public struct Configuration
	{
		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x0")]
		internal Setup Setup;

		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x8")]
		internal Properties Properties;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x10")]
		internal DiscreteTime ReportedLength;

		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x18")]
		internal bool IsFinite;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x19")]
		internal bool IsRealtime;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x1A")]
		internal bool HasKnownLength;

		[Token(Token = "0x1700001F")]
		public bool isRealtime
		{
			[Token(Token = "0x600008C")]
			[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000020")]
		public DiscreteTime? length
		{
			[Token(Token = "0x600008D")]
			[Address(RVA = "0x2EB5780", Offset = "0x2EB3D80", VA = "0x182EB5780")]
			get
			{
				return null;
			}
		}
	}

	[Token(Token = "0x200001F")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/GeneratorHandle.h")]
	internal struct GeneratorHeader
	{
		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x0")]
		internal ProcessorHeader Processor;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x38")]
		internal Configuration Configuration;
	}

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x0")]
	internal readonly ProcessorInstance m_ProcessorInstance;

	[Token(Token = "0x6000085")]
	[Address(RVA = "0xBAD8E0", Offset = "0xBABEE0", VA = "0x180BAD8E0")]
	public static implicit operator ProcessorInstance(in GeneratorInstance generatorInstance)
	{
		return default(ProcessorInstance);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2EB5940", Offset = "0x2EB3F40", VA = "0x182EB5940", Slot = "4")]
	public bool Equals(GeneratorInstance other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2EB5980", Offset = "0x2EB3F80", VA = "0x182EB5980", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2EB5A30", Offset = "0x2EB4030", VA = "0x182EB5A30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
